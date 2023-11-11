using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


class OhnePolymorphismus
{
    static void Main(string[] args)
    {
        Haustier h1 = new Haustier(HaustierArt.HUND, "Bello");
        Haustier h2 = new Haustier(HaustierArt.KATZE, "Mietze");
        Haustier h3 = new Haustier(HaustierArt.WELLENSITTICH, "Hansi");
        Haustier h4 = new Haustier(HaustierArt.HUND, "Lopi");

        List<Haustier> haustiere =
            new List<Haustier>() { h1, h2, h3, h4 };

        foreach (Haustier tier in haustiere)
        {
            tier.SchreibeName();
            tier.Fressen();
            tier.Freuen();
            tier.LautGeben();
            System.Console.WriteLine();
        }

        Console.ReadKey();
    }
}

