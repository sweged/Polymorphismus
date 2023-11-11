import {Haustier} from "./Haustier";
import {HaustierArt} from "./HaustierArt";


class Polymorphismus{
    static hauptprogramm(){
        let h1 : Haustier = new Haustier(HaustierArt.HUND, "Bello");
        let h2 : Haustier = new Haustier(HaustierArt.KATZE, "Mietze");
        let h3 : Haustier = new Haustier(HaustierArt.WELLENSITTICH, "Hansi");
        let h4 : Haustier = new Haustier(HaustierArt.HUND, "Lopi");

        let haustiere : Haustier[] = [h1, h2, h3, h4];

        for (let tier of haustiere){
            tier.schreibeName();
            tier.fressen();
            tier.freuen();
            tier.lautGeben();
            console.log("--------------");
        }
    }
}

Polymorphismus.hauptprogramm();