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
        std::cout << "Modu� elementu " << i << ": " << tablica[i]->modul() << std::endl;
    }

    for (int i = 0; i < 4; i++) {
        delete tablica[i];
    }

    // Zadanie 3:
    std::cout << "\nZadanie 3:" << std::endl;
    Complex c3(1.0, 2.0);
    Complex c4(3.0, 4.0);

    Complex c5 = c3 + c4; // Przeci��enie operatora + w klasie Complex
    std::cout << "c5 = c3 + c4: " << c5 << std::endl;

    return 0;
}


/*
Zadanie 1:

Tworzymy obiekty Liczba i Complex zar�wno jako zmienne lokalne, jak i dynamicznie (przez wska�niki).
Wywo�ujemy metody wypisz na tych obiektach.
Usuwamy dynamicznie utworzone obiekty, aby unikn�� wyciek�w pami�ci.
Zadanie 2:

Tworzymy tablic� wska�nik�w do obiekt�w typu Wartosc_Liczbowa i wype�niamy j� obiektami Liczba i Complex.
Wywo�ujemy metod� modul na ka�dym obiekcie w tablicy, co pokazuje, �e metoda modul jest wirtualna.
Zadanie 3:

Tworzymy dwa obiekty klasy Complex, a nast�pnie u�ywamy przeci��onego operatora +, kt�ry pozwala na dodawanie obiekt�w klasy Complex.
Wykorzystujemy r�nic� mi�dzy przeci��aniem (overloading) a nadpisywaniem (overriding) - operator + jest przeci��ony w klasie Complex, a nie nadpisywany, poniewa� nie jest to metoda wirtualna.
*/