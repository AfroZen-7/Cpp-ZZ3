#ifndef COSINUS_H
#define COSINUS_H

#include "puissance.hpp"
#include "factorielle.hpp"

template <int N> class Cosinus 
{
    public :
        static double valeur(long double x) 
        {
            return (Puissance<N>::valeur(-1) * (Puissance<2 * N>::valeur(x) / Factorielle<2 * N>::valeur)) + Cosinus<N-1>::valeur(x);
        }
};

template <> class Cosinus<0>
{
    public :
        static double valeur(long double ) 
        {
            return 1;
        }
};

#endif