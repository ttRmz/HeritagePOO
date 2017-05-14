#ifndef DEF_INTERIMAIRE
#define DEF_INTERIMAIRE
 
#include <iostream>
#include <string>
#include "Employe.h"
#include "Technicien.h"

class Interimaire : public Technicien
{
public: 
    Interimaire();
    int calcul ();
    int getNbHeure();
    void setNbHeure(int nbHeure);
private:
    int m_nbHeure;
};

#endif