using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
#pragma warning disable IDE0028

class Polymorphismus
{
    static void Main(string[] args)
    {
        Haustier h1 = new Hund("Bello");
        Haustier h2 = new Katze("Mietze");
        Haustier h3 = new Wellensittich("Hansi");
        Haustier h4 = new Hund("Lopi");

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

