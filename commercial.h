#ifndef DEF_COMMERCIAL
#define DEF_COMMERCIAL

#include <iostream>
#include <string>
#include <"Employe.h">

class Commercial : private Employe
{
	public:
	int getprime();

	private : 
	int m_prime;
}