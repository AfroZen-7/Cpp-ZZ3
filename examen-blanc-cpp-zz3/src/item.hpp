#pragma once

#include <string>

class Item
{
    protected :
        std::string nom;
        bool vendable;
        double prix;
        void setVendable(bool b) {vendable = b;};
    public :
        Item(std::string n) : nom(n), vendable(false), prix(0) {};
        Item(std::string n, double p) : nom(n), vendable(true), prix(p) {};
        Item (const Item & a) {nom = a.getNom(); vendable = a.estVendable(); prix = a.getPrix();};
        std::string getNom() const {return nom;};
        bool estVendable() const {return vendable;};
        double getPrix() const {return prix;};
};