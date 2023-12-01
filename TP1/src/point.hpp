#ifndef POINT_H
#define POINT_H

#include <cstdlib>
#include <iostream>

class Polaire;
class Cartesien;

class Point
{
    public :
        virtual void afficher(std::ostream &) const = 0;
        virtual void convertir (Cartesien &) const = 0;
        virtual void convertir (Polaire &) const = 0;
};

void operator<<(std::ostream &, const Point &);

#endif