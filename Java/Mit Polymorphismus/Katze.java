public class Katze extends Haustier{

    public Katze(String n){
        super(n);
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
