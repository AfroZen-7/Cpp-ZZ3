#ifndef PUISSANCE_H
#define PUISSANCE_H

template <int N> class Puissance 
{
    public :
        static double valeur(long double x) 
        {
            return (x * (Puissance<N-1>::valeur(x)));
        }
};

template <> class Puissance<0>
{
    public :
        static double valeur(long double ) 
        {
            return 1;
        }
};

#endif