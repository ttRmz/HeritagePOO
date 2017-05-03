#ifndef DEF_EMPLOYE
#define DEF_EMPLOYE

#include <iostream>
#include <string>

class Employe
{
public : void setlastName (std::string lastname);
		std::string getlastname();

		void setfirstname (std::string firstname);
		std::strng getfirstname();

		void setage (int age);
		int getage();

		int getsalaire();
private : 
		std::string m_firstname;
		std::string m_lastname;
		int m_age;
		int m_salaire;

};