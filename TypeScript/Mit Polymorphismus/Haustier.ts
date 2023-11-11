export abstract class Haustier{
    protected name : string;

    constructor(n : string){
        this.name = n;
    }

    abstract fressen():void
    abstract freuen():void
    abstract lautGeben():void

    schreibeName(){
        console.log(this.name);
    }
}


