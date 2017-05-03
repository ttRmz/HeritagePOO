#ifndef DEF_REPRESENTANT
#define DEF_REPRESENTANT
 
#include <iostream>
#include <string>
#include <"Employe.h">
#define DEF_REPRESENTANT_SALAIRE 2500
#define DEF_REPRESENTANT_PRIME 250

class Representant : public Commercial
{
public : 
	Representant();
	int calcul(int salaire, int nbprime, int nbdeplacement);
	int getdeplacement();

}

