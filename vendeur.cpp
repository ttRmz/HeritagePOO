#include "Vendeur.h"
using namespace std;

	Vendeur::Vendeur ()
	{
		m_salaire = DEF_VENDEUR_SALAIRE;
		m_prime = DEF_VENDEUR_PRIME;
	}
	int Vendeur::calcul(int salaire, int nbprime)
	{
		return m_salaire+ (nbprime * m_prime);

	}
