#ifndef POLAIRE_H
#define POLAIRE_H

#include <cstdlib>
#include <iostream>
#include <cmath>

#include "point.hpp"

class Cartesien;
class Nuage;

class Polaire : public Point
{
    private :
        double x;
        double y;
    
    public :
        Polaire();
        Polaire(double, double);
        Polaire(const Cartesien &);
        void afficher(std::ostream &) const override;
        double getAngle() const;
        double getDistance() const;
        void setAngle(double);
        void setDistance(double);
        void convertir (Cartesien &) const override;
        void convertir (Polaire &) const override;
};

class BarycentrePolaire
{
    public :
        Polaire operator()(const Nuage &) const;
};

#endif