#ifndef DEF_INTERIMAIRE
#define DEF_INTERIMAIRE
 
#include <iostream>
#include <string>
#include <"Employe.h">

class Interimaire : private Technicien
{
public : Interimaire();
int calcul (int nbHeure);
}