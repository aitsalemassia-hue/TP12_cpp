
#include "Vecteur2D.h"
#include<iostream>

Vecteur2D::Vecteur2D(float x,float y):x(x),y(y) {
	// TODO Auto-generated constructor stub

}

Vecteur2D Vecteur2D::operator+(const Vecteur2D& autre) const{
	return Vecteur2D(this->x + autre.x, this->y + autre.y);
}

void Vecteur2D::afficher() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}


Vecteur2D::~Vecteur2D() {
	// TODO Auto-generated destructor stub
}

