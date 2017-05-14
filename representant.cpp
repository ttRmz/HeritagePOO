#include "Representant.h"
using namespace std;

	Representant::Representant ()
	{
		m_salaire = DEF_REPRESENTANT_SALAIRE;
		m_prime = DEF_REPRESENTANT_PRIME;
	}
	int Representant::calcul()
	{
		return m_salaire + (m_nbPrime * m_prime ) + (m_nbDeplacement * 50);

	}
	int Representant::getDeplacement(){
		return m_nbDeplacement;
	}
	void Representant::setDeplacement(int nbDeplacement){
		m_nbDeplacement = nbDeplacement;
	}