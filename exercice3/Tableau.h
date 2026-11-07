#ifndef TABLEAU_H
#define TABLEAU_H

#include <iostream>
#include <stdexcept>

class Tableau {
private:
    int* data;
    int taille;

public:

    Tableau(int taille = 0);


    Tableau(const Tableau& autre);



    Tableau& operator=(const Tableau& autre);


    ~Tableau();


    int& operator[](int index);


    const int& operator[](int index) const;


    int getTaille() const { return taille; }
};

#endif // TABLEAU_H
