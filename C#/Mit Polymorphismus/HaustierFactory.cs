using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class HaustierFactory
{
    public static Haustier ErstelleHaustier(HaustierArt art, string name)
    {
        switch (art)
        {
            case HaustierArt.HUND:
                return new Hund(name);
            case HaustierArt.KATZE:
                return new Katze(name);
            case HaustierArt.WELLENSITTICH:
                return new Wellensittich(name);
            default:
                return null;
        }
    }
}

