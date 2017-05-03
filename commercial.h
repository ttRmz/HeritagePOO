#ifndef DEF_COMMERCIAL
#define DEF_COMMERCIAL

#include <iostream>
#include <string>
#include <"Employe.h">

class Commercial : private employe
{
	private:
		Commercial(std::string prenom);
		Commercial(std::string nom);
		Commercial(std::string age);
		Commercial(std::string salaire);

}