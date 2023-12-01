#ifndef CARTESIEN_H
#define CARTESIEN_H

#include <cstdlib>
#include <iostream>
#include <cmath>

#include "point.hpp"

class Polaire;
class Nuage;

class Cartesien : public Point
{
    private :
        double x;
        double y;

    public :
        Cartesien();
        Cartesien(double, double);
        Cartesien(const Polaire &);
        double getX() const;
        void setX(double);
        double getY() const;
        void setY(double);
        void afficher(std::ostream &) const override;
        void convertir (Cartesien &) const override;
        void convertir (Polaire &) const override;
};

class BarycentreCartesien
{
    public :
        Cartesien operator()(const Nuage &) const;
};

#endif