#include "Complex.hpp"

#include <iostream>
using std::cout; using std::endl;

Complex::Complex(double r, double i) : real(r), imaginario(i) { }

Complex Complex::operator+(const Complex &c) const {
    return Complex(this->real + c.real, this->imaginario + c.imaginario);
}

Complex Complex::operator-(const Complex &c) const {
    return Complex(this->real - c.real, this->imaginario - c.imaginario);
}

Complex Complex::operator+=(const Complex &c) {
    this->real += c.real;
    this->imaginario += c.imaginario;
    return *this;
}

Complex Complex::operator-=(const Complex &c) {
    this->real -= c.real;
    this->imaginario -= c.imaginario;
    return *this;
}

Complex Complex::operator++() {
    ++real;
    return *this;
}

Complex Complex::operator++(int) {
    Complex aux = *this;
    real++;
    return aux;
}

Complex Complex::operator--() {
    --real;
    return *this;
}

Complex Complex::operator--(int) {
    Complex aux = *this;
    real--;
    return aux;
}