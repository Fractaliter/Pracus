#include "Pracownik.h"



Pracownik::Pracownik(int w, string i)
{
	imie = i;
	wiek = w;
}


Pracownik::~Pracownik()
{
	cout << endl << "To ja, destruktor sie nazywam";
	cout << " kasuje obiekty, slowa przepraszam nie uzywam";
}

void Pracownik::load()
{
	cout << endl << "imie Pracownik2a ";
	cin >> imie;
	cout << endl << "wiek Pracownik2a: ";
	cin >> wiek;
	cout << endl << "login: ";
	cin >> login;
	cout << endl << "haslo ";
	cin >> haslo;
}
void Pracownik::show()
{
	cout << endl << imie << " " << "lat:" << wiek << endl;
}