#include <iostream>
#include "Caso.cpp"


int main() {
  Caso caso01("CrimesABC","23/07/2024",Policial("Harry","Delegado"));
  Suspeito susp01("Will");
  susp01.indiciar();

  Vestigio vest01("Sangue","Biologico");
  vest01.setEvidencia();
  
  caso01.inserePerito(Policial("Victor","Perito"));
  caso01.insereSuspeito(susp01);
  caso01.insereVestigio(vest01);

  caso01.display();

  return 0;
}