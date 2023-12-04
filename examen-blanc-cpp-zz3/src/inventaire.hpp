#pragma once

#include <vector>

class Inventaire
{
    private :
        int taille;
        std::vector<Item> stock; 
    public:    
        Inventaire() : taille(0) {}
        int getTaille() const {return taille;}
        void ajouter(const Item * i) 
        {
            stock.push_back(*i);
            taille++;
        }
};