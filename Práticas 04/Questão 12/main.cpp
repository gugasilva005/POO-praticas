#include <iostream>

#include "ArrayList.cpp"

int main() {
  ArrayList al(10);

  al.add(1).add(2).add(10).add(20).add(50);
  
  al.print();

  return 0;
}