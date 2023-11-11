using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


class Wellensittich : Haustier
{
    public Wellensittich(string n) : base(n)
    { }
    public override void Fressen()
    {
        System.Console.WriteLine("Korn fressen");
    }

    public override void Freuen()
    {
        System.Console.WriteLine("wippen");
    }

    public override void LautGeben()
    {
        System.Console.WriteLine("zwitschern");
    }
}    

