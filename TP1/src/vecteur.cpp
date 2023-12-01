#include <cstdlib>
#include "vecteur.hpp"

Vecteur::Vecteur() : tab(nullptr), size_reel(0){}

void Vecteur::copieTab (const int * t, const int taille)
{
    for (int i = 0; i < taille; i++)
    {
        tab[i] = t[i];
    }
}

Vecteur::Vecteur(const int x, const int * t) : size_reel(x)
{
    tab = new int [x];
    copieTab(t, size_reel);
}

Vecteur::~Vecteur() {delete [] tab;}

Vecteur::Vecteur (const Vecteur & v) : Vecteur(v.size(), v.begin()) {}

int * Vecteur::begin () const {return tab;}

int * Vecteur::end () const 
{
    return &tab[size() - 1];
}

void Vecteur::set_tab(int * t) {tab = t;}

int Vecteur::size() const {return size_reel;}

void Vecteur::set_size (const int s) {size_reel = s;}

int Vecteur::operator[] (const int x) const
{
    if (x >= 0 && x < size())
    {
        return tab[x];
    }
    else
    {
        throw InvalidAccesDataVector();
    }
}

void Vecteur::operator= (const Vecteur & v)
{
    size_reel = v.size();
    tab = new int [size_reel];
    copieTab(v.begin(), size_reel);
}

Vecteur Vecteur::operator+ (const Vecteur & v) const
{
    Vecteur v2;
    if (size() == v.size())
    {
        v2.set_tab(new int [size()]);
        v2.set_size(size());
        for (int i = 0; i < size(); i++)
        {
            v2.tab[i] = tab[i] + v[i];
        }
    }
    else
    {
        throw SizeVectorException();
    }

    return v2;
}

int Vecteur::operator* (const Vecteur & v) const
{
    int res = 0;
    if (size() == v.size())
    {
        for (int i = 0; i < size(); i++)
        {
            res += tab[i] * v[i];
        }
    }
    else
    {
        throw SizeVectorException();
    }

    return res;
}

void operator<< (std::ostream & f, const Vecteur & v)
{
    f << "[";
    for (int i = 0; i < v.size(); i++)
    {
        f << v[i];
        if (i != v.size() - 1)
        {
            f << ", ";
        }
    }
    f << "]";
}

Iterateur::Iterateur(int * i) : cour(i) {}

int Iterateur::operator*() const {return (*cour);}

void Iterateur::operator++() {cour = &cour[1];}

void Iterateur::operator++(int i) {cour = &cour[i+1];}

bool Iterateur::operator==(const Iterateur & it) const
{
    if(it.cour == cour)
    {
        return true;
    }
    return false;
}

bool Iterateur::operator!=(const Iterateur & it) const
{
    if(it.cour == cour)
    {
        return false;
    }
    return true;
}