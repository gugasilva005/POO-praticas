#include "IntegerSet.cpp"

int main() {
    /*
    IntegerSet set1;
    std::cout << "Conjunto 1: ";
    set1.print();

    // Construtor com array inicializado
    int elements[] = {1, 2, 3, 50, 75};
    IntegerSet set2(elements, 5);
    std::cout << "Conjunto 2: ";
    set2.print();

    // Inserindo elementos no conjunto
    //set1.insertElement(10);
    //set1.insertElement(50);
    //set1.insertElement(99);

    // Inserindo com a sobrecarga
    set1 << 10;
    set1 << 50;
    set1 << 99;

    std::cout << "Conjunto 1 apos insercoes: ";
    set1.print();

    // Deletando elementos do conjunto
    //set1.deleteElement(10);
    //set1.deleteElement(50);
    //set1.deleteElement(100);  // Valor fora do intervalo

    // Deletando com a sobrecarga
    set1 >> 10;
    set1 >> 50;
    set1 >> 100;

    std::cout << "Conjunto 1 apos delecoes: ";
    set1.print();
    */
    

    
    int elements1[] = {1, 2, 3, 50, 75};
    IntegerSet set1(elements1, 5);
    
    int elements2[] = {2, 3, 4, 50, 99};
    IntegerSet set2(elements2, 5);

    std::cout << "Conjunto 1: ";
    std::cout << set1 << std::endl;

    std::cout << "Conjunto 2: ";
    std::cout << set2 << std::endl;

    // União dos conjuntos
    IntegerSet unionSet = set1 | set2;
    std::cout << "Uniao dos conjuntos: ";
    std::cout << unionSet << std::endl;

    // Interseção dos conjuntos
    IntegerSet intersectionSet = set1 & set2;
    std::cout << "Intersecao dos conjuntos: ";
    std::cout << intersectionSet << std::endl;
    
    return 0;
}