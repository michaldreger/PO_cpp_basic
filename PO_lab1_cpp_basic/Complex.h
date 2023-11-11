#pragma once
#include "Liczba.h"
#include <iostream>


class Complex : public Wartosc_Liczbowa
{
protected:
	double re;
	double im; //czesc urojona
public:
	~Complex(void);
	Complex(double re = 0, double im = 0);
	Complex operator +(const Complex& other);
	friend std::ostream& operator<< (std::ostream& out, Complex& l);
	
	double modul();
	void wypisz(std::ostream& out)
	{
		out << *this;
	}
};

