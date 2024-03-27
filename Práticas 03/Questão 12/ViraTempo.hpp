#ifndef VIRATEMPO_HPP
#define VIRATEMPO_HPP

class ViraTempo {

    public:
        ViraTempo(const int& n) : n(n), tempo(0), prox(true) {}

        void mostrarTempo();
        void avancarTempo();
        void virarTempo();

    private:
        int n;
        int tempo;
        bool prox;
};

#endif