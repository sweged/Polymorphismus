public class Wellensittich extends Haustier{
    public Wellensittich(){
        name = "";
    }
    public Wellensittich(String n){
        name = n;
    }

    public void fressen(){
        System.out.println("Korn fressen");
    }

    public void freuen(){
        System.out.println("wippen");
    }

    public void lautGeben(){
        System.out.println("zwitschern");
    }
}
