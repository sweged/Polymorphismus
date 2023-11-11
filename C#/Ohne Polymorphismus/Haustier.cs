using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


class Haustier
{
    protected string name;
    protected HaustierArt type;
    public Haustier(HaustierArt art, string n)
    {
        type = art;
        name = n;
    }

    public void Fressen()
    {
        switch (type)
        {
            case HaustierArt.HUND:
                System.Console.WriteLine("Knochen nagen");
                break;
            case HaustierArt.KATZE:
                System.Console.WriteLine("Maus fressen");
                break;
            case HaustierArt.WELLENSITTICH:
                System.Console.WriteLine("Korn fressen");
                break;
        }
    }

    public void Freuen()
    {
        switch (type)
        {
            case HaustierArt.HUND:
                System.Console.WriteLine("wedeln");
                break;
            case HaustierArt.KATZE:
                System.Console.WriteLine("schnurren");
                break;
            case HaustierArt.WELLENSITTICH:
                System.Console.WriteLine("wippen");
                break;
        }
    }

    public void LautGeben()
    {
        switch (type)
        {
            case HaustierArt.HUND:
                System.Console.WriteLine("bellen");
                break;
            case HaustierArt.KATZE:
                System.Console.WriteLine("miauen");
                break;
            case HaustierArt.WELLENSITTICH:
                System.Console.WriteLine("zwitschern");
                break;
        }
    }

    public void SchreibeName()
    {
        System.Console.WriteLine(name);
    }
}

