#include "Produit.h"

Produit::Produit(std::string nom, double prix, int quantite)
    : nom(nom), prix(prix), quantite(quantite) {}


std::ostream& operator<<(std::ostream& os, const Produit& p) {
    os << "Produit [Nom: " << p.nom
       << ", Prix: " << p.prix << " DH"
       << ", Quantite: " << p.quantite << "]";
    return os;
}
