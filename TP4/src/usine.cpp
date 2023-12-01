#include <memory>

#include "usine.hpp"
#include "carte.hpp"

UsineCarte::UsineCarte() : compteur(0), max_value(52) {}

UsineCarte::UsineCarte(unsigned short x) : compteur(0)
{
    if (x > 0)
    {
        max_value = x;
    }
}

std::unique_ptr<Carte> UsineCarte::getCarte () 
{
    if (compteur < max_value)
    {
        std::unique_ptr<Carte> p(new Carte(compteur));
        compteur++;
        return p;
    }
    else {return nullptr;}
    
}