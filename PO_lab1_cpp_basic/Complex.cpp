#include "Complex.h"
#include <iostream>
#include <cmath>


Complex::Complex(double re, double im) 
{
	std::cout << "Konstruktor Liczba Zespolona= " << re << " + " << im << "i" << "\n";
	this->re = re;
	this->im = im;
}

Complex::~Complex()
{
	std::cout << "Destruktor Complex, zawartoœæ obiektu: " << *this;
}

double Complex::modul()
{
	return sqrt(re * re + im * im); // Obliczanie modu³u liczby z czêœci rzeczywistej i urojonej
}

Complex Complex::operator +(const Complex& other)
{
    return Complex(this->re + other.re, this->im + other.im);
}

std::ostream& operator<<(std::ostream& out, Complex& l)
{
    out << "Liczba zespolona: " << l.re;
    if (l.im >= 0)
        out << " + " << l.im << "i";
    else
        out << " - " << -l.im << "i";
    out << "\n";
    return out;
}