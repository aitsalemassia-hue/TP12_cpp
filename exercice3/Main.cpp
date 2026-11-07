#include "Tableau.h"
#include <iostream>

int main() {
    try {

        Tableau t(5);
        std::cout << "Taille du tableau : " << t.getTaille() << std::endl;


        for (int i = 0; i < t.getTaille(); ++i) {
            t[i] = i + 10;
        }


        std::cout << "Contenu : ";
        for (int i = 0; i < t.getTaille(); ++i) {
            std::cout << t[i] << " ";
        }
        std::cout << std::endl;


        Tableau t2 = t;
        t2[0] = 999;
        std::cout << "t[0]  = " << t[0]  << std::endl;
        std::cout << "t2[0] = " << t2[0]  << std::endl;


        std::cout << "\nTentative d'acces a l'index 10" << std::endl;
        t[10] = 50;

    }
    catch (const std::out_of_range& e) {

        std::cerr << "EXCEPTION CAPTUREE : " << e.what() << std::endl;
    }

    return 0;
}
