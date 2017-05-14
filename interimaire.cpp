#include "Interimaire.h"
using namespace std;
Interimaire::Interimaire()
{
	
}
int Interimaire::calcul()
{

return m_nbHeure * 24.5;

}

int Interimaire::getNbHeure(){
    return m_nbHeure;
}

void Interimaire::setNbHeure(int nbHeure){
    m_nbHeure =  nbHeure;
}