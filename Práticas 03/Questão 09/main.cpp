#include <iostream>
#include "Time.cpp"

using std::cout;
using std::endl;

int main(void) {

    Time t1(11, 50, 59);
    t1.tick();
    t1.printUniversal();

    Time t2(11, 59, 59);
    t2.tick();
    t2.printUniversal();

    Time t3(23, 59, 59);
    t3.tick();
    t3.printUniversal();

    return 0;
}