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
            
            if (itemsNormaux.empty())
            {
                itemsNormaux.push_back(*i);
            }
            else if (itemsNormaux.front().getNom() < i->getNom())
            {
                itemsNormaux.push_back(*i);
            }
            else
            {
                itemsNormaux.push_front(*i);
            }
            taille++;
        }

        void ajouter(const Item * i, Categorie c) 
        {
            switch (c)
            {
                case Categorie::ARME :
                    if (itemsArmes.empty())
                    {
                        itemsArmes.push_back(*i);
                    }
                    else if (itemsArmes.front().getNom() < i->getNom())
                    {
                        itemsArmes.push_back(*i);
                    }
                    else
                    {
                        itemsArmes.push_front(*i);
                    }
                    break;
                
                case Categorie::CONSOMMABLE :
                    if (itemsConsommables.empty())
                    {
                        itemsConsommables.push_back(*i);
                    }
                    else if (itemsConsommables.front().getNom() < i->getNom())
                    {
                        itemsConsommables.push_back(*i);
                    }
                    else
                    {
                        itemsConsommables.push_front(*i);
                    }
                    break;
                
                case Categorie::RARE :
                    if (itemsRares.empty())
                    {
                        itemsRares.push_back(*i);
                    }
                    else if (itemsRares.front().getNom() < i->getNom())
                    {
                        itemsRares.push_back(*i);
                    }
                    else
                    {
                        itemsRares.push_front(*i);
                    }
                    break;
                
                default :
                    if (itemsArmes.empty())
                    {
                        itemsArmes.push_back(*i);
                    }
                    else if (itemsNormaux.front().getNom() < i->getNom())
                    {
                        itemsNormaux.push_back(*i);
                    }
                    else
                    {
                        itemsNormaux.push_front(*i);
                    }
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