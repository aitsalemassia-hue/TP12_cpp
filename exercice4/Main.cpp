#include "Produit.h"
#include <iostream>

int main() {
    // Création de quelques produits
    Produit p1("Clavier Mecanique", 89.99, 12);
    Produit p2("Souris Gamer", 45.50, 30);
    Produit p3("Ecran 27\"", 249.00, 5);

    std::cout << " Liste des produits" << std::endl;


    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;

    // Test du chaînage de l'opérateur (très utile pour l'affichage)
    std::cout << "\n Test du chainage " << std::endl;
    std::cout << "Produit A : " << p1 << "  Produit B : " << p2 << std::endl;

    return 0;
}
