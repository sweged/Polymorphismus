public class Hund extends Haustier{
    public Hund(){
        name = "";
    }
    public Hund(String n){
        name = n;
    }

    public void fressen(){
        System.out.println("Knochen nagen");
    }

    public void freuen(){
        System.out.println("wedeln");
    }

    public void lautGeben(){
        System.out.println("bellen");
    }

}
