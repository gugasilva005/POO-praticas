#ifndef AGENDA_MELHORADA_HPP
#define AGENDA_MELHORADA_HPP

#include <string>
using std::string;

class Pessoa {
    public:
        Pessoa () {}
        Pessoa(const string& nome, const int& idade, const float& altura) : \
            nome(nome), idade(idade), altura(altura) {}
        
        string getNome() const { return this->nome; }  
        int getIdade() const { return this->idade; }
        float getAltura() const { return this->altura; }

    private:
        string nome;
        int idade;
        float altura;
};

class Agenda {
    public:
    
        Agenda(int tPessoas = 1);
        ~Agenda(); 

        void armazenaPessoa(const string &nome, int idade, float altura);
        void armazenaPessoa(const Pessoa &p);

        void removePessoa(const string &nome);

        int buscaPessoa(const string &nome) const; // informa em que posição da agenda está a pessoa
        void imprimePovo() const; // imprime todos os dados de todas as pessoas da agenda
        void imprimePessoa(int i) const; // imprime os dados da pessoa que está na posição 'i' da agenda
    private:
        Pessoa *pessoas;
        int tPessoas;
        int qtdePessoas;
};

#endif