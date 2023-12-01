#pragma once

#include <memory>

class Carte;

class UsineCarte
{
    private :
        unsigned short compteur;
        unsigned short max_value;
    public :
        UsineCarte();
        UsineCarte(unsigned short);
        UsineCarte(const UsineCarte&) = delete; //Interdiction du constructeur par copie
        std::unique_ptr<Carte> getCarte();
        UsineCarte & operator=(const UsineCarte &) = delete; //Interdiction de l'opérateur par affectation
};