import {HaustierArt} from "./HaustierArt";

export class Haustier{
    protected name : string;
    protected type : HaustierArt;

    constructor(a : HaustierArt, n : string){
        this.type = a;
        this.name = n;
    }

    fressen():void {
        switch (this.type) {
            case HaustierArt.HUND:
                console.log("Knochen nagen");
                break;
            case HaustierArt.KATZE:
                console.log("Maus fressen");
                break;
            case HaustierArt.WELLENSITTICH:
                console.log("Korn fressen");
                break;
        }
    }

    freuen():void {
        switch (this.type) {
            case HaustierArt.HUND:
                console.log("wedeln");
                break;
            case HaustierArt.KATZE:
                console.log("schnurren");
                break;
            case HaustierArt.WELLENSITTICH:
                console.log("wippen");
                break;
        }
    }

    lautGeben():void {
        switch (this.type) {
            case HaustierArt.HUND:
                console.log("bellen");
                break;
            case HaustierArt.KATZE:
                console.log("miauen");
                break;
            case HaustierArt.WELLENSITTICH:
                console.log("zwitschern");
                break;
        }
    }

    schreibeName(){
        console.log(this.name);
    }
}


