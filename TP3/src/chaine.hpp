#ifndef CHAINE_H
#define CHAINE_H

#include <tuple>

#include "demangle.hpp"

template <typename T> std::string chaine(const T &);

class ExceptionChaine : public std::exception {
    private:
        std::string msg;
    public:
        ExceptionChaine(std::string);
        const char* what() const throw();
};

std::string chaine(const std::string &);
std::string chaine(int);
std::string chaine(double);

template <typename... Args> std::string chaine(Args...);

template <typename... Args> std::string chaine(std::tuple<Args...> &);

template <typename T,size_t... Args> std::string f_bis(const T & t,std::index_sequence<Args...>);

#include "chaine.xpp"

#endif