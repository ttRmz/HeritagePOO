#include "Representant.h"
using namespace std;

	Representant::Representant ()
	{
		m_salaire = DEF_REPRESENTANT_SALAIRE;
		m_prime = DEF_REPRESENTANT_PRIME;
	}
	int Representant::calcul(int salaire, int nbprime, int nbdeplacement)
	{
		return m_salaire+ (nbprime * m_prime ) + (nbdeplacement * 50);

	}
