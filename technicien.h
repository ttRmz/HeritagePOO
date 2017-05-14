#ifndef DEF_TECHNICIEN
#define DEF_TECHNICIEN
 
#include <iostream>
#include <string>
#include "Employe.h"
#define DEF_TECHNICIEN_SALAIRE 2000

class Technicien : public Employe
{
	public: 
	Technicien();
	int getsalaire();

};

#endif