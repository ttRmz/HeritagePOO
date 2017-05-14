#ifndef DEF_REPRESENTANT
#define DEF_REPRESENTANT
 
#include <iostream>
#include <string>
#include "Commercial.h"
#include "Employe.h"
#define DEF_REPRESENTANT_SALAIRE 2500
#define DEF_REPRESENTANT_PRIME 250

class Representant : public Commercial
{
public: 
	Representant();
	int calcul();
	int getDeplacement();
	void setDeplacement(int nbDeplacement);
protected:
	int m_nbDeplacement;
};

#endif