public class Haustier {
    protected String name;
    protected HaustierArt type;

    Haustier(HaustierArt art, String n){
        type = art;
        name = n;
    }

    public void fressen(){
        switch (type){
            case HUND:
                System.out.println("Knochen nagen");
                break;
            case KATZE:
                System.out.println("Maus fressen");
                break;
            case WELLENSITTICH:
                System.out.println("Korn fressen");
                break;
        }
    }

    public void freuen(){
        switch (type){
            case HUND:
                System.out.println("wedeln");
                break;
            case KATZE:
                System.out.println("schnurren");
                break;
            case WELLENSITTICH:
                System.out.println("wippen");
                break;
        }
    }

    public void lautGeben(){
        switch (type){
            case HUND:
                System.out.println("bellen");
                break;
            case KATZE:
                System.out.println("miauen");
                break;
            case WELLENSITTICH:
                System.out.println("zwitschern");
                break;
        }
    }

    public void schreibeName(){
        System.out.println(name);
    }

}
