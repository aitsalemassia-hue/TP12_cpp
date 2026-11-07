#include"Vecteur2D.h"
#include<iostream>


int main(){

	Vecteur2D v1(2.4,3);
	Vecteur2D v2(1.2,4);


	std::cout<<"v1 = ";
	v1.afficher();
	std::cout<<"v2 = ";
	v2.afficher();
	Vecteur2D v3=v1+v2;
	std::cout<<"v1 + v2 = ";
	v3.afficher();


	return 0;
}




