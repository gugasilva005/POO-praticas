#ifndef DATA_HPP
#define DATA_HPP

class Data {
    public:
        Data(int, int, int);

        int setDia( int );

        int setMes( int ) ;

        int setAno( int );

        int getDia();

        int getMes();

        int getAno();

        void mostrarData();

    private:
        int dia;
        int mes;
        int ano;

};

#endif