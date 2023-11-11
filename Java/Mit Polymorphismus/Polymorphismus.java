import java.util.ArrayList;

public class Polymorphismus {
    public static void main(String[] args) {

        Haustier h1 = new Hund("Bello");
        Haustier h2 = new Katze("Mietze");
        Haustier h3 = new Wellensittich("Hansi");
        Haustier h4 = new Hund("Lopi");

        ArrayList<Haustier> haustiere = new ArrayList<>();
        haustiere.add(h1);
        haustiere.add(h2);
        haustiere.add(h3);
        haustiere.add(h4);


        for (Haustier haustier : haustiere){
            haustier.schreibeNamen();
            haustier.fressen();
            haustier.freuen();
            haustier.lautGeben();
            System.out.println();
        }
    }
}
