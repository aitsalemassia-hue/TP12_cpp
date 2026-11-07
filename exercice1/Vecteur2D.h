

#ifndef EXERCICE1_VECTEUR2D_H_
#define EXERCICE1_VECTEUR2D_H_

class Vecteur2D {
private:
	float x;
	float y;
public:
	Vecteur2D(float x,float y);
	void afficher() const;
	Vecteur2D operator+(const Vecteur2D& autre) const;

	float getX() const {return x;}
	float getY() const {return y;}
	virtual ~Vecteur2D();
};

#endif /* EXERCICE1_VECTEUR2D_H_ */
