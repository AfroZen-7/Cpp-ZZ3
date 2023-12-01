#pragma once

#include "usine.hpp"

class Carte
{
    private :
        const unsigned short valeur;
        Carte(const unsigned short);
        Carte(const Carte&) = delete; //Interdiction du constructeur par copie
        Carte & operator=(const Carte &) = delete; //Interdiction de l'opérateur par affectation

    public :
        
        unsigned short getValeur() const;
    
    friend class UsineCarte;
};