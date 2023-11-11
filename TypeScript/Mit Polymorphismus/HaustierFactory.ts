import {Haustier} from "./Haustier";
import {HaustierArt} from "./HaustierArt";
import {Hund} from "./Hund";
import {Katze} from "./Katze";
import {Wellensittich} from "./Wellensittich";

class HaustierFactory{
    constructor(){
    }

    static erstelleHaustier(art : number, name : string) : Haustier{
        switch(art){
            case HaustierArt.HUND:
                return new Hund(name);
            case 2:
                return new Katze(name);
            case 3:
                return new Wellensittich(name);
            default:
                return new Hund("");
        }
    }
}

export {HaustierFactory};