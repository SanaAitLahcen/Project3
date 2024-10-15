#pragma once
#include<string>
using namespace std;

class Vehicule
{    
private:
	//les attributs
	int id;
    string marque;
	int vitesse;
public:
	//les méthodes
	Vehicule();
	Vehicule(int id, string marque, int vitesse);//on peut mentionner sans parametre juste les types
	Vehicule(const Vehicule& V);
	void afficher();
	void freiner();
	void avancer();
};