#include "Date.h"
#include <iostream>

int main() {
	Date d1(15, 06, 2024);
	Date d2(15, 06, 2024);
	Date d3(01, 01, 2025);

	std::cout << "d1 = ";
	d1.afficher();
	std::cout << std::endl;

	std::cout << "d2 = ";
	d2.afficher();
	std::cout << std::endl;

	std::cout << "d3 = ";
	d3.afficher();
	std::cout << std::endl;

	// Test ==
	if (d1 == d2)
		std::cout << "d1 == d2 : oui,dates identiques" << std::endl;
	else
		std::cout << "d1 == d2 : non,dates differntes" << std::endl;

	// Test !=
	if (d1 != d3)
		std::cout << "d1 != d3 : oui , dates differentes" << std::endl;
	else
		std::cout << "d1 != d3 : non , date identiques" << std::endl;

	if (d1 != d2)
		std::cout << "d1 != d2 : oui , dates differentes" << std::endl;
	else
		std::cout << "d1 != d2 :  non , date identiques" << std::endl;

	return 0;
}
