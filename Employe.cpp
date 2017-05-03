#include "Employe.h"
using namespace std;

		void Employe::setlastName (std::string lastname)
		{
			m_lastname=lastname;
		}
		std::string Employe::getlastname()
		{
			return m_lastname;
		}

		void Employe::setfirstname (std::string firstname)
			{
			m_firstname=firstname;
		}
		std::strng Employe::getfirstname()
		{
			return m_firstname;
		}
		
		void Employe::setage (int age)
		{
			m_age=age;
		}
		int Employe::getage()
		{
			return m_age;
		}

		int Employe::getsalaire()
		{
			return m_salaire;
		}
