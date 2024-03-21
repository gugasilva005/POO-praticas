#ifndef BRUXO_HPP
#define BRUXO_HPP

#include <string>
using std::string;

class Bruxo {
    public:
        Bruxo(string, string, string);

        void setNome(string);

        void setCasa(string);

        void setFeitico(string);

        string getNome();

        string getCasa();

        string getFeitico();

        void lancarFeitico();

        void display();

    private:
        string nome;
        string casa;
        string feitico_p;
};

#endif