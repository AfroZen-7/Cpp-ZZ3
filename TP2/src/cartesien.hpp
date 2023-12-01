#ifndef CARTESIEN_H
#define CARTESIEN_H

#include <cstdlib>
#include <iostream>
#include <cmath>

#include "point.hpp"

class Polaire;

//template <typename T> //Déclaration de la classe template
//template <class T> Nuage<T>;

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

#endif