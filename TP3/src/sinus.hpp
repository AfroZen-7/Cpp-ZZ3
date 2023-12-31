#ifndef SINUS_H
#define SINUS_H

#include "puissance.hpp"
#include "factorielle.hpp"

template <int N> class Sinus 
{
    public :
        static double valeur(long double x) 
        {
            return Puissance<N>::valeur(-1) * (Puissance<2 * N + 1>::valeur(x) / Factorielle<2 * N + 1>::valeur) + Sinus<N-1>::valeur(x);
        }
};

template <> class Sinus<0>
{
    public :
        static double valeur(long double x) 
        {
            return x;
        }
};

#endif