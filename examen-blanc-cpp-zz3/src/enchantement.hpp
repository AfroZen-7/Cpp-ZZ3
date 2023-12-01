#pragma once

class Enchantement
{
    private :
        double valeur;
    public:    
        Enchantement(double v) : valeur(v) {};
        double getPuissance() const {return valeur;};
};