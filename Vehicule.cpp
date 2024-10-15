#include "Vehicule.h"
#include <iostream>

Vehicule::Vehicule()
{
	this->id = 1;
	this->marque = "";
	this->vitesse = 0;
}

Vehicule::Vehicule(int id, string marque, int vitesse)
{
	this->id = id;
	this->marque = marque;
	this->vitesse = vitesse;
}


Vehicule::Vehicule(const Vehicule& V)
{
	this->id = V.id;
	this->marque = V.marque;
	this->vitesse = V.vitesse;
}





void Vehicule::afficher()
{
	
	cout <<"infos vehicule" << std::endl;
	cout << "id:" <<this->id << std::endl;
	cout << "marque:" << this->marque << std::endl;
	cout << "vitesse:" << this->vitesse << std::endl;

}

void Vehicule::freiner()
{
	this->vitesse = 0;
}


void Vehicule::avancer()
{
	this->vitesse += 20;
}