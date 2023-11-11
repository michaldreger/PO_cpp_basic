#include "Liczba.h"
#include <iostream>
#include <cmath>

Liczba::Liczba(double re)
{
    std::cout << "Konstruktor Liczba = " << re << "\n";
    this->re = re;
}

Liczba::~Liczba()
{
    std::cout << "Destruktor Liczba, zawartosc obiektu: " << *this;
}

double Liczba::modul()
{
    return fabs(re); // Funkcja fabs zwraca wartoœæ bezwzglêdn¹ liczby rzeczywistej.
}

std::ostream& operator<<(std::ostream& out, Liczba& l)
{
    out << "Liczba rzeczywista: " << l.re << "\n";
    return out;
}