#include "Pracodawca.h"
#include <string>
#include <iostream>

using namespace std;



Pracodawca::Pracodawca(int w, string i)
{
	imie = i;
	wiek = w;
}

Pracodawca::~Pracodawca()
{
	cout << endl << "To ja, destruktor sie nazywam";
	cout << " kasuje obiekty, slowa przepraszam nie uzywam";
}

void Pracodawca::load()
{
	cout << endl << "imie pracodawcy ";
	cin >> imie;
	cout << endl << "wiek pracodawcy: ";
	cin >> wiek;
	cout << endl << "login: ";
	cin >> login;
	cout << endl << "haslo ";
	cin >> haslo;
}

void Pracodawca::show()
{
	cout << endl << imie << " " << "lat:" << wiek << endl;
}