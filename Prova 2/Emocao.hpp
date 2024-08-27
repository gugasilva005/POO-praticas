#ifndef EMOCAO_HPP
#define EMOCAO_HPP

#include <string>
//using std::string;
using namespace std;

class Emocao {
  public:
    Emocao(const string &nome, bool estado = false) : nome(nome), isAtiva(estado) { }
    virtual ~Emocao() { }

    virtual void processar(const string &descricao) = 0;

    string getNome() const { return nome; }

    bool estaAtiva() const { return this->isAtiva; }

  protected:
    string nome;
    bool isAtiva;
};

#endif