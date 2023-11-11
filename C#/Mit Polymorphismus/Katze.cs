using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


class Katze : Haustier
{
    public Katze(string n) : base(n)
    { }
    public override void Fressen()
    {
        System.Console.WriteLine("Maus fressen");
    }

    public override void Freuen()
    {
        System.Console.WriteLine("schnurren");
    }

    public override void LautGeben()
    {
        System.Console.WriteLine("miauen");
    }
}

