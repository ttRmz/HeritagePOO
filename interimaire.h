#ifndef DEF_INTERIMAIRE
#define DEF_INTERIMAIRE
 
#include <iostream>
#include <string>
#include <"Employe.h">

class Interimaire : private employe
{
	private:
		Interimaire(std::string prenom);
		Interimaire(std::string nom);
		Interimaire(std::string age);
		Interimaire(std::string salaire);

}