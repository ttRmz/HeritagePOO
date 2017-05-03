#ifndef DEF_VENDEUR
#define DEF_VENDEUR
 
#include <iostream>
#include <string>
#include <"Employe.h">

class Vendeur : private employe
{
	private:
		Vendeur(std::string prenom);
		Vendeur(std::string nom);
		Vendeur(std::string age);
		Vendeur(std::string salaire);

}