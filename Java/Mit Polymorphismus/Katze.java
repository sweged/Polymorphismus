public class Katze extends Haustier{
    public Katze(){
        name = "";
    }
    public Katze(String n){
        name = n;
    }

    public void fressen(){
        System.out.println("Maus fressen");
    }

    public void freuen(){
        System.out.println("schnurren");
    }

    public void lautGeben(){
        System.out.println("miauen");
    }
}
