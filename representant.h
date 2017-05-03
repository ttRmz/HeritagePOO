#ifndef DEF_REPRESENTANT
#define DEF_REPRESENTANT
 
#include <iostream>
#include <string>
#include <"Employe.h">

class Representant : private employe
{
	private:
		Representant(std::string prenom);
		Representant(std::string nom);
		Representant(std::string age);
		Representant(std::string salaire);

}