#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo {
    public:
        Retangulo(const double& = 1.0, const double& = 1.0);

        void setLargura(const double&);
        void setAltura(const double&);

        double getLargura() { return this->largura; }
        double getAltura() { return this->altura; }

        double perimetro();
        double area();
        void display();

    private:
        double altura;
        double largura;
};



#endif