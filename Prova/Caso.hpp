#ifndef CASO_HPP
#define CASO_HPP

#include "Policial.hpp"
#include "Suspeito.hpp"
#include "Vestigio.hpp"

#include <string>
using std::string;

class Caso {

    public:
        Caso(const string &, const string &, const Policial &);

        void inserePerito(const Policial &);
        void removePerito(int);

        void insereSuspeito(const Suspeito &);
        void removeSuspeito(int);

        void insereVestigio(const Vestigio &);
        void removeVestigio(int);

        void display() const;

    private:
        string id, data;
        Policial delegado;
        Policial peritos[5];
        int tPeritos;
        Suspeito suspeitos[10];
        int tSuspeitos;
        Vestigio vestigios[20];
        int tVestigios;
};

#endif