#ifndef DEF_VENDEUR
#define DEF_VENDEUR
 
#include <iostream>
#include <string>
#include "Commercial.h"
#include "Employe.h"
#define DEF_VENDEUR_SALAIRE 2500
#define DEF_VENDEUR_PRIME 100

class Vendeur : public Commercial
{
public:
	Vendeur();
	int calcul();
};

#endif