#include "cartesien.hpp"
#include "polaire.hpp"
#include "nuage.hpp"

Cartesien::Cartesien() : x(0), y(0) {}

Cartesien::Cartesien(double a, double b) : x(a), y(b) {}

Cartesien::Cartesien(const Polaire & p) : x(p.getDistance() * std::cos(p.getAngle() * M_PI / 180)), y(p.getDistance() * std::sin(p.getAngle() * M_PI / 180)) {}

double Cartesien::getX() const
{
    return x;
}

void Cartesien::setX(double a)
{
    x = a;
}

double Cartesien::getY() const
{
    return y;
}

void Cartesien::setY(double a)
{
    y = a;
}

void Cartesien::afficher(std::ostream & flux) const
{
    flux << "(x=" << getX() << ";y=" << getY() << ")";

}

//On la met ici parce qu'il faut redéfinir toutes les méthodes virtuelles de la classe mère dans la classe fille pour que 
//la classe fille ne soit pas virtuelle
void Cartesien::convertir (Cartesien & c) const{c.setX(x);c.setY(y);};

void Cartesien::convertir (Polaire & p) const
{
    p.setAngle(std::atan2(getY(), getX()) * 180 / M_PI);
    p.setDistance(std::hypot(getX(), getY()));
}