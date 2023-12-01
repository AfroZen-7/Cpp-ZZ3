#ifndef NUAGE_H
#define NUAGE_H

#include <vector>

#include "point.hpp"

class Cartesien;

class Nuage
{
    private :
        std::vector<Point *> v; //On fait un vecteur de pointeurs de Points parce que Point étant abstrait vecteur ne peut pas être instancier
    
    public :
        unsigned int size () const;
        void ajouter (Point &);
        using const_iterator = std::vector<Point *>::const_iterator;
        const_iterator begin() const;
        const_iterator end() const;
};

Cartesien barycentre (const Nuage &);

#endif