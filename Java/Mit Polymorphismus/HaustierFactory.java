@SuppressWarnings("ALL")
public class HaustierFactory {
    public static Haustier erstelleHaustier(HaustierArt art, String name){
        switch(art){
            case HUND:
                return new Hund(name);
            case KATZE:
                return new Katze(name);
            case WELLENSITTICH:
                return new Wellensittich(name);
            default:
                return new Hund("");
        }
    }
}
