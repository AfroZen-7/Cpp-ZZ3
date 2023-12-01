#include "polaire.hpp"
#include "cartesien.hpp"
#include "nuage.hpp"

Polaire::Polaire() : x(0), y(0) {}

Polaire::Polaire(double angle, double distance) : x(angle), y(distance) {}

Polaire::Polaire(const Cartesien & c) : x(std::atan2(c.getY(), c.getX()) * 180 / M_PI), y(std::hypot(c.getX(), c.getY())) {}

double Polaire::getAngle() const
{
    return x;
} 

double Polaire::getDistance() const
{
    return y;
}

void Polaire::setAngle(double a) {x = a;}

void Polaire::setDistance(double d) {y = d;}

void Polaire::afficher(std::ostream & flux) const
{
    flux << "(a=" << x << ";d=" << y << ")";
}

//On la met ici parce qu'il faut redéfinir toutes les méthodes virtuelles de la classe mère dans la classe fille pour que 
//la classe fille ne soit pas virtuelle
void Polaire::convertir (Polaire & p) const {p.setAngle(x);p.setDistance(y);};

void Polaire::convertir (Cartesien & c) const
{
    c.setX(this->getDistance() * std::cos(getAngle() * M_PI / 180));
    c.setY(this->getDistance() * std::sin(getAngle() * M_PI / 180));
}

Polaire BarycentrePolaire::operator()(const Nuage & n) const
{
    Cartesien c = barycentre(n);
    Polaire p (c);
    c.convertir(p);
    return p;
}