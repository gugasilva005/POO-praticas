#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList {

    friend ArrayList somaArray(const ArrayList &, const int);
    friend ArrayList subArray(const ArrayList &, const int);
    friend ArrayList mulArray(const ArrayList &, const int);
    friend ArrayList divArray(const ArrayList &, const int);

    public:
    ArrayList(int);
    ~ArrayList();

    ArrayList &add(int);

    void print() const;

    private:
    int *arr;
    int tam;
    int pos;
};

#endif