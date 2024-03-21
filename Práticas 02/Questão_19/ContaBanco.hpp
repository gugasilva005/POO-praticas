#ifndef CONTABANCO_H
#define CONTABANCO_H

class ContaBanco {

    public:
        ContaBanco( double );

        double creditar( double );

        double debitar( double );

        double getSaldo();


    private:
    double saldoConta;

};

#endif