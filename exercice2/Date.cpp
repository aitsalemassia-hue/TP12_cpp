/*
 * Date.cpp
 *
 *  Created on: 6 nov. 2026
 *      Author: Admin
 */

#include "Date.h"
#include <iostream>

Date::Date(int j,int m,int a) :jour(j),mois(m),annee(a){
	// TODO Auto-generated constructor stub

}


bool Date::operator ==(const Date& autre) const{
	return (this->jour == autre.jour &&
			this->mois == autre.mois &&
			this->annee == autre.annee

			);



}

bool Date::operator !=(const Date& autre) const{
	return !(*this==autre);
}

void Date::afficher() const{
	std::cout<<jour<<"/"<<mois<<"/"<<annee;
}
Date::~Date() {
	// TODO Auto-generated destructor stub
}

