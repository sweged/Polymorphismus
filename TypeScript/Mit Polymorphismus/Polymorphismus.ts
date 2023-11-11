import {Haustier} from "./Haustier";
import {Hund} from "./Hund";
import {Katze} from "./Katze";
import {Wellensittich} from "./Wellensittich";

class Polymorphismus{
    static hauptprogramm(){
        let h1 : Haustier = new Hund("Bello");
        let h2 : Haustier = new Katze("Mietze");
        let h3 : Haustier = new Wellensittich("Hansi");
        let h4 : Haustier = new Hund("Lopi");

        let haustiere : Haustier[] = [h1, h2, h3, h4];

        for (let tier of haustiere){
            tier.schreibeName();
            tier.fressen();
            tier.freuen();
            tier.lautGeben();
            console.log("--------------");
        }
    }

    func() {

        x : Haustier; 
        
        

        
        




    }
    
    



}

Polymorphismus.hauptprogramm();