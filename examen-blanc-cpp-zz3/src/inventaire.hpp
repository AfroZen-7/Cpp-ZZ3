#pragma once

#include <vector>
#include <list>
#include "item.hpp"

class Inventaire
{
    private :
        int taille;
        //std::vector<Item> stock;
        std::list<Item> itemsNormaux;
        std::list<Item> itemsArmes;
        std::list<Item> itemsConsommables;
        std::list<Item> itemsRares;

    public:    
        //Classe d'énumération
        enum class Categorie : char
        {
            ARME = 'A', CONSOMMABLE = 'C', RARE = 'R', NORMAL='N'
        };
        //using list_t = std::set<Item *, Comparateur>;
        
        //Création des containers (listes) permettant de stocker les Items par catégorie, on réutilise le std::list_t car plus pratique
        using list_t = std::list<Item>;
        
        Inventaire() : taille(0) {}
        
        int getTaille() const {return taille;}
        
        void ajouter(const Item * i) 
        {
            //stock.push_back(*i);
            taille++;
            itemsNormaux.push_back(*i);
        }

        void ajouter(const Item * i, Categorie c) 
        {
            switch (c)
            {
                case Categorie::ARME :
                    itemsArmes.push_back(*i);
                    break;
                
                case Categorie::CONSOMMABLE :
                    itemsConsommables.push_back(*i);
                    break;
                
                case Categorie::RARE :
                    itemsRares.push_back(*i);
                    break;
                
                default :
                    itemsNormaux.push_back(*i);
                    break;
            }
            taille++;
        }

        list_t & getItemsParCategorie (Categorie c)
        {
            switch (c)
            {
                case Categorie::ARME :
                    return itemsArmes;
                    break;
                
                case Categorie::CONSOMMABLE :
                    return itemsConsommables;
                    break;
                
                case Categorie::RARE :
                    return itemsRares;
                    break;
                
                default :
                    return itemsNormaux;
                    break;
            }
        }

};