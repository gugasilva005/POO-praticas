#ifndef INTEGERSET_HPP
#define INTEGERSET_HPP

#include <array>
#include <algorithm>
#include <iostream>
using std::array;

class IntegerSet {
    friend IntegerSet unionOfSets(const IntegerSet &set1, const IntegerSet &set2) {
        IntegerSet resultSet;
        for (int i = 0; i < 100; i++) {
            if (set1.conjunto[i] == 1 or set2.conjunto[i] == 1)
                resultSet.conjunto[i] = 1;
        }
        return resultSet;
    }
    friend IntegerSet intersectionOfSets(const IntegerSet &set1, const IntegerSet &set2) {
        IntegerSet resultSet;
        for (int i = 0; i < 100; i++) {
            if (set1.conjunto[i] == 1 and set2.conjunto[i] == 1)
                resultSet.conjunto[i] = 1;
        }
        return resultSet;
    }

    friend std::ostream &operator<<(std::ostream &out, const IntegerSet &set) {
        out << "{ ";
        for (int i = 0; i < 100; i++) {
            if (set.conjunto[i] == 1)
                out << i << " ";
        }
        out << "}";
        return out;
    }

    public:
        IntegerSet() : conjunto {} { }
        IntegerSet(const int[], int);

        void insertElement(int);
        void deleteElement(int);

        void print() const;

        IntegerSet &operator<<(int k) {
            insertElement(k);
            return *this;
        }

        IntegerSet &operator>>(int k) {
            deleteElement(k);
            return *this;
        }

        IntegerSet operator|(const IntegerSet &b) const {
            IntegerSet resultSet;
            for (int i = 0; i < 100; i++) {
                if (this->conjunto[i] == 1 or b.conjunto[i] == 1)
                    resultSet.conjunto[i] = 1;
            }
            return resultSet;
        }

        IntegerSet operator&(const IntegerSet &b) const {
            IntegerSet resultSet;
            for (int i = 0; i < 100; i++) {
                if (this->conjunto[i] == 1 and b.conjunto[i] == 1)
                    resultSet.conjunto[i] = 1;
            }
            return resultSet;
        }
    private:
        array<int, 100> conjunto;
};

#endif