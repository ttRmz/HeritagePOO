#ifndef DEF_EMPLOYE
#define DEF_EMPLOYE

#include <iostream>
#include <string>

class Employe
{
private:
	Employe(std::string name);
	void nom();
	void prenom();
	void age();
	void salaire();

};