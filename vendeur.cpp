#include "Vendeur.h"
using namespace std;

	Vendeur::Vendeur ()
	{
		m_salaire = DEF_VENDEUR_SALAIRE;
		m_prime = DEF_VENDEUR_PRIME;
	}
	int Vendeur::calcul()
	{
		return m_salaire+(m_nbPrime * m_prime);

	}
