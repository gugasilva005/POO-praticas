#include "Riley.hpp"
//#include "Alegria.hpp"
//#include "Raiva.hpp"
//#include "Tristeza.hpp"

#include <iostream>

int main() {  
  Riley riley;

  riley << Alegria("Alegria");
  riley << Raiva("Raiva");
  riley << Tristeza("Tristeza");

  riley.processar("Brincando no parquinho.");
  riley.processar("Viagem para Disney.");
  riley.processar("Primeiro encontro.");
  riley.processar("Uma noite no museu.");
  riley.processar("O dia em que quebrou um osso.");

  std::cout << std::endl << std::endl << riley << std::endl;

  return 0;  
}