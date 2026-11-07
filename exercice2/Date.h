

#ifndef EXERCICE2_DATE_H_
#define EXERCICE2_DATE_H_

class Date {
private:
	int jour,mois,annee;
public:
	Date(int j,int m,int a);
	bool operator==(const Date& autre) const ;
	bool operator!=(const Date& autre) const;
	void afficher() const;

	virtual ~Date();
};

#endif /* EXERCICE2_DATE_H_ */
