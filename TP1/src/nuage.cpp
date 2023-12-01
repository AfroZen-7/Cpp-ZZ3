#include <vector>

#include "nuage.hpp"
#include "point.hpp"
#include "cartesien.hpp"

unsigned int Nuage::size () const {return v.size();}

void Nuage::ajouter (Point & p)
{
    Point * ptrP = & p;
    v.push_back(ptrP);
}

Nuage::const_iterator Nuage::begin() const
{
    return v.begin();
}

Nuage::const_iterator Nuage::end() const
{
    return v.end();
}

Cartesien barycentre (const Nuage & n)
{
    if(n.size() == 0)
    {
        return Cartesien(0.0,0.0);
    }
    else
    {
        Nuage::const_iterator it;
        double x = 0;
        double y = 0;
        unsigned int i = 0;
        for(it = n.begin(); it != n.end(); it++, i++)
        {
            Cartesien c;
            (*it)->convertir(c);
            x += c.getX();
            y += c.getY();
        }
        x /= i;
        y /= i;
        return Cartesien(x,y);
    }
    
}