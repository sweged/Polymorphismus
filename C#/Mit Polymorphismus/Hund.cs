using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Hund : Haustier
{
    public Hund(string n) : base(n)
    {}
    public override void Fressen()
    {
        System.Console.WriteLine("Knochen nagen");
    }

    public override void Freuen()
    {
        System.Console.WriteLine("wedeln");
    }

    public override void LautGeben()
    {
        System.Console.WriteLine("bellen");
    }
}

