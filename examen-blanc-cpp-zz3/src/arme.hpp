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
        
        Arme(const Arme & a) : Item(a), durabilite(a.getDurabilite()) 
        {
            setVendable(a.estVendable());
            ench = new Enchantement(a.getEnchantement()->getPuissance());
        };
        
        //Constructeur par mouvement qui fait appel au constructeur par mouvement de la classe parent
        Arme(Arme&& autre) noexcept : Item(autre), durabilite(autre.durabilite), ench(autre.ench)
        {
            autre.durabilite = 0;
            autre.ench = nullptr;
        }

        //Redéfinition de l'opérateur d'affection pour passer le test std::is_move_assignable<Arme>::value
        Arme operator=(Arme && arme)
        {
            return Arme(std::move(arme));
        }

        //Destructeur car pointeur utilisé dans la classe
        ~Arme() {delete ench;}

        //Exception personnalisée
        class DestroyedItemException : std::exception
        {
            public :
                const char* what() const throw() {return "Exception levée dû à la durabilité de l'arme qui est nulle.";};
        };

        std::string getNom() const //"Redéfinition" de la méthode toString()
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
            else {throw DestroyedItemException();}; //Déclenchement de l'exception
        };

        Enchantement * getEnchantement () const {return ench;};

        void enchanter (Enchantement * e) 
        {
            ench = e;
        };
};