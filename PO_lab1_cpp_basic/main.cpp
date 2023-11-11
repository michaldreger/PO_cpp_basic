#include "Liczba.h"
#include "Complex.h"

int main()
{
    // Zadanie 1:
    std::cout << "Zadanie 1:" << std::endl;
    Liczba l1(5.0);
    Complex c1(3.0, 4.0);

    Liczba* l2 = new Liczba(2.0);
    Complex* c2 = new Complex(1.0, 1.0);

    l1.wypisz(std::cout);
    c1.wypisz(std::cout);

    l2->wypisz(std::cout);
    c2->wypisz(std::cout);

    delete l2;
    delete c2;

    // Zadanie 2:
    std::cout << "\nZadanie 2:" << std::endl;
    Wartosc_Liczbowa* tablica[4];
    tablica[0] = new Liczba(3.0);
    tablica[1] = new Complex(2.0, 2.0);
    tablica[2] = new Liczba(-1.0);
    tablica[3] = new Complex(0.0, -2.0);

    for (int i = 0; i < 4; i++) {
        std::cout << "Modu³ elementu " << i << ": " << tablica[i]->modul() << std::endl;
    }

    for (int i = 0; i < 4; i++) {
        delete tablica[i];
    }

    // Zadanie 3:
    std::cout << "\nZadanie 3:" << std::endl;
    Complex c3(1.0, 2.0);
    Complex c4(3.0, 4.0);

    Complex c5 = c3 + c4; // Przeci¹¿enie operatora + w klasie Complex
    std::cout << "c5 = c3 + c4: " << c5 << std::endl;

    return 0;
}


/*
Zadanie 1:

Tworzymy obiekty Liczba i Complex zarówno jako zmienne lokalne, jak i dynamicznie (przez wskaŸniki).
Wywo³ujemy metody wypisz na tych obiektach.
Usuwamy dynamicznie utworzone obiekty, aby unikn¹æ wycieków pamiêci.
Zadanie 2:

Tworzymy tablicê wskaŸników do obiektów typu Wartosc_Liczbowa i wype³niamy j¹ obiektami Liczba i Complex.
Wywo³ujemy metodê modul na ka¿dym obiekcie w tablicy, co pokazuje, ¿e metoda modul jest wirtualna.
Zadanie 3:

Tworzymy dwa obiekty klasy Complex, a nastêpnie u¿ywamy przeci¹¿onego operatora +, który pozwala na dodawanie obiektów klasy Complex.
Wykorzystujemy ró¿nicê miêdzy przeci¹¿aniem (overloading) a nadpisywaniem (overriding) - operator + jest przeci¹¿ony w klasie Complex, a nie nadpisywany, poniewa¿ nie jest to metoda wirtualna.
*/