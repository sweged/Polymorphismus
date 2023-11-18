public abstract class Haustier {
    protected String name;

    public Haustier(String name){
        this.name = name;
    }
    public abstract void fressen();

    public abstract void freuen();

    public abstract void lautGeben();

    public void schreibeNamen(){
        System.out.println(name);
    }
}
