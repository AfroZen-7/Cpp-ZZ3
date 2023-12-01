#ifndef EXPONENTIELLE_H
#define EXPONENTIELLE_H

#include "puissance.hpp"
#include "factorielle.hpp"

template <int N> class Exponentielle 
{
    public :
        static double valeur(long double x) 
        {
            return (Puissance<N>::valeur(x) / Factorielle<N>::valeur) + Exponentielle<N-1>::valeur(x);
        }
};

template <> class Exponentielle<0>
{
    public :
        static double valeur(long double ) 
        {
            return 1;
        }
};

#endif