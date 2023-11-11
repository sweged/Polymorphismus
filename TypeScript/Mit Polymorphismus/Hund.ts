import {Haustier} from "./Haustier";

class Hund extends Haustier{
    constructor(n : string){
        super(n);
    }

    fressen(){
        console.log("Knochen nagen");
    }

    freuen(){
        console.log("wedeln");
    }

    lautGeben(){
        console.log("bellen");
    }
}

export {Hund};

