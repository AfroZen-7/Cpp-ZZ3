#ifndef NUAGE_H
#define NUAGE_H

#include <vector>

class Cartesien;

template <typename T> //Déclaration de la classe template
class Nuage
{
    private :
        std::vector<T> v; //On fait un vecteur de pointeurs de Points parce que Point étant abstrait vecteur ne peut pas être instancier
    
    public :
        unsigned int size () const;
        void ajouter (const T);
        using const_iterator = typename std::vector<T>::const_iterator;
        typename Nuage<T>::const_iterator begin() const;
        typename Nuage<T>::const_iterator end() const;
};

template <typename T>
Cartesien barycentre_v1 (const Nuage<T> &);

template <typename T>
Cartesien barycentre_v1B (const Nuage<T> &);

template <typename T>
Cartesien barycentre_v2 (const Nuage<T> &);

template <typename T>
Cartesien barycentre_v2 (const std::vector<Cartesien> &);

#include "nuage.xpp"

#endif