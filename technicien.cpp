#include "Technicien.h"
using namespace std;
Technicien::Technicien()
{

	m_salaire=DEF_TECHNICIEN_SALAIRE;

}

int Technicien::getsalaire()
		{
			return m_salaire;
		}

