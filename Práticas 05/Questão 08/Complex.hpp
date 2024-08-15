#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>

class Complex {
    friend std::ostream &operator<<(std::ostream &out, const Complex &c) {
        out << "(" << c.real << " + " << c.imaginario << "i)";
        return out;
    }
    public:
        Complex(double = 0.0, double = 0.0);

        Complex operator+(const Complex &) const;

        Complex operator-(const Complex &) const;

        Complex operator+=(const Complex &);

        Complex operator-=(const Complex &);

        Complex operator++(int); //pós-fixado

        Complex operator++(); //pré-fixado

        Complex operator--(int); //pós-fixado

        Complex operator--(); //pré-fixado
        
    private:
        double real;
        double imaginario;
};

#endif