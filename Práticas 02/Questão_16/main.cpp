#include "Carro.cpp" // O include no .cpp é por causa do VS não estar configurado para 
                    // compilar mais de um arquivo e eu tbm não lembro mais como configura :)

int main() {
  
  Carro carro_teste("Ford", 1998);

  carro_teste.displayMessage();

  Carro outroCarro("Toyota", 2005);

  outroCarro.displayMessage();

  return 0;
}