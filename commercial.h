#ifndef DEF_COMMERCIAL
#define DEF_COMMERCIAL

#include <iostream>
#include <string>
#include "Employe.h"

class Commercial : public Employe
{
public:
	int getprime();
	int getNbPrime();
	void setNbPrime(int nbprime);

protected: 
	int m_prime;
	int m_nbPrime;
};

#endif