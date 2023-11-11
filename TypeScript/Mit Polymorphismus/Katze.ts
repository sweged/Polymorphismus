import {Haustier} from "./Haustier";

class Katze extends Haustier{
    constructor(n : string){
        super(n);

    }

    fressen(){
        console.log("Maus fressen");
    }

    freuen(){
        console.log("schnurren");
    }

    lautGeben(){
        console.log("miauen");
    }
}

export {Katze};

