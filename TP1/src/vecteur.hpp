#ifndef VECTEUR_H
#define VECTEUR_H

#include <cstdlib>
#include <iostream>
#include <cmath>

class Vecteur
{
    private :
        int * tab;
        int size_reel;
        void copieTab(const int *, const int);

    public :
        Vecteur();
        Vecteur(const int, const int *);
        Vecteur (const Vecteur &);
        ~Vecteur();
        int * begin() const;
        int * end() const;
        void set_tab(int *);
        int size() const;
        void set_size(const int);
        int operator[] (const int) const;
        void operator= (const Vecteur &);
        Vecteur operator+ (const Vecteur &) const;
        int operator* (const Vecteur &) const;
};

class SizeVectorException : public std::exception
{
    public:
        const char* what() const throw() { return "Taille de vecteur différents\n";}
};

class InvalidAccesDataVector : public std::exception
{
    public:
        const char* what() const throw() { return "Indice invalide pour le vecteur\n";}
};

void operator<< (std::ostream &, const Vecteur &);

class Iterateur
{
    public :
        int * cour;
        Iterateur(int *);
        int operator*() const;
        void operator++(); //++it
        void operator++(int); //it++
        bool operator==(const Iterateur &) const;
        bool operator!=(const Iterateur &) const;
};

#endif