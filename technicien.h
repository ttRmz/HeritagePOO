#ifndef DEF_TECHNICIEN
#define DEF_TECHNICIEN
 
#include <iostream>
#include <string>
#include <"Employe.h">

class Technicien : private employe
{
	private:
		Technicien(std::string prenom);
		Technicien(std::string nom);
		Technicien(std::string age);
		Technicien(std::string salaire);

}