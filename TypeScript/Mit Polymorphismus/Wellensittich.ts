import {Haustier} from "./Haustier";

class Wellensittich extends Haustier{
    constructor(n : string){
        super(n);

    }

    fressen(){
        console.log("Korn fressen");
    }

    freuen(){
        console.log("wippen");
    }

    lautGeben(){
        console.log("zwitschern");
    }
}

export {Wellensittich};

