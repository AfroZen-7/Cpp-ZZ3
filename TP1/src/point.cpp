#include "point.hpp"
#include "polaire.hpp"
#include "cartesien.hpp"

void operator<<(std::ostream & flux, const Point & p) 
{
    p.afficher(flux);
}