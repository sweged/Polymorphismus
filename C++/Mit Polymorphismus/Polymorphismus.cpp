// Polymorphismus.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <list>
#include "Haustier.h"
#include "Hund.h"
#include "Katze.h"
#include "Wellensittich.h"


int main()
{
    Haustier* h1 = new Hund("Bello");
    Haustier* h2 = new Katze("Mietze");
    Haustier* h3 = new Wellensittich("Hansi");
    Haustier* h4 = new Hund("Lopi");
    
    list<Haustier*> haustiere;
    haustiere.push_back(h1);
    haustiere.push_back(h2);
    haustiere.push_back(h3);
    haustiere.push_back(h4);

    for (auto haustier : haustiere) 
    {
        haustier->schreibeName();
        haustier->fressen();
        haustier->freuen();
        haustier->lautGeben();
        cout << endl;
    }
}


