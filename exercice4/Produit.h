

#ifndef EXERCICE4_PRODUIT_H_
#define EXERCICE4_PRODUIT_H_



#include <iostream>
#include <string>

class Produit {
private:
    std::string nom;
    double prix;
    int quantite;

public:
    Produit(std::string nom, double prix , int quantite);

    friend std::ostream& operator<<(std::ostream& os, const Produit& p);
};

#endif // PRODUIT_H
