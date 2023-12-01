#pragma once

#include <sstream>
#include <string>
#include <item.hpp>
#include <enchantement.hpp>

class Arme : public Item
{
    private :
        double durabilite;
        Enchantement * ench;
    public:    
        double getDurabilite () const {return durabilite;};
        Arme(std::string n, double p, double d) : Item(n,p), durabilite(d), ench(nullptr) {setVendable(false);};
        Arme(const Arme & a) : Item(a), durabilite(a.getDurabilite()), ench(a.getEnchantement()) {setVendable(a.estVendable());};
        
        class DestroyedItemException : std::exception
        {
            public :
                const char* what() const throw() {return "Exception levée dû à la durabilité de l'arme qui est nulle.";};
        };

        std::string getNom() const 
        {
            std::stringstream flux; 
            flux << nom;
            flux << " ["; 
            flux << durabilite; 
            flux << "]";
            return flux.str();
        };

        void utiliser () 
        {
            if (durabilite > 0) {durabilite--;}
            else {throw DestroyedItemException();};
        };

        Enchantement * getEnchantement () const {return ench;};

        void enchanter (Enchantement * e) 
        {
            ench = e;
        };
};