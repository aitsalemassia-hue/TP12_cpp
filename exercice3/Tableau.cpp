#include "Tableau.h"


Tableau::Tableau(int taille) : taille(taille) {
    if (taille < 0) taille = 0;
    data = new int[taille];

    for (int i = 0; i < taille; ++i) {
        data[i] = 0;
    }
}

Tableau::Tableau(const Tableau& autre) : taille(autre.taille) {
    data = new int[taille];
    for (int i = 0; i < taille; ++i) {
        data[i] = autre.data[i];
    }
}

Tableau& Tableau::operator=(const Tableau& autre) {
    if (this != &autre) {
        delete[] data;

        taille = autre.taille;
        data = new int[taille];
        for (int i = 0; i < taille; ++i) {
            data[i] = autre.data[i];
        }
    }
    return *this;
}


Tableau::~Tableau() {
    delete[] data;
}


int& Tableau::operator[](int index) {
    if (index < 0 || index >= taille) {

        throw std::out_of_range("Erreur : Index hors limites !");
    }
    return data[index]; 5;
}


