import java.util.ArrayList;

public class OhnePolymorphismus {
    public static void main(String[] args) {
        Haustier h1 = new Haustier(HaustierArt.HUND, "Bello");
        Haustier h2 = new Haustier(HaustierArt.KATZE, "Mietze");
        Haustier h3 = new Haustier(HaustierArt.WELLENSITTICH, "Hansi");
        Haustier h4 = new Haustier(HaustierArt.HUND, "Lopi");

        ArrayList<Haustier> haustiere = new ArrayList<>();

        haustiere.add(h1);
        haustiere.add(h2);
        haustiere.add(h3);
        haustiere.add(h4);

        for (Haustier tier : haustiere){
            tier.schreibeName();
            tier.fressen();
            tier.freuen();
            tier.lautGeben();
            System.out.println();
        }
    }
}

