// pracus.cpp : Defines the entry point for the console application.
//
#include <string>
#include <iostream>
#include "conio.h"
#include "stdafx.h"
#include "Pracownik.h"
#include "Pracodawca.h"
#include <sstream>
#include <fstream>
#include <cstdlib>
using namespace std;

int fileExists(const char* fileName) // sprawdzanie czy plik istnieje
{
	struct stat buf;
	if (stat(fileName, &buf) == 0) // odczytywanie statystyk pliku - jesli ich nie ma to plik nie istnieje
		return 1;
	else
		return 0;
}

void rejestracja()
{
	cout << "Login: ";
	cin >> login;
	cout << "Haslo: ";
	cin >> haslo;

	if (fileExists(login.c_str())) // .c_str() - zamienianie char na string
	{
		cout << "Nazwa uzytkownika jest juz zajeta" << endl << endl;
		system("PAUSE");
	}
	else
	{
		plik.open(login.c_str(), ios::out);
		plik << login << endl;
		plik << haslo << endl;
		cout << "Pomyslnie utworzono nowe konto" << endl << endl;
		system("PAUSE");
	}

	plik.close();
}


void logowanie()
{
	string bufLogin, bufHaslo;

	cout << "Podaj login: ";
	cin >> login;
	cout << "Podaj haslo: ";
	cin >> haslo;

	plik.open(login.c_str(), ios::in | ios::out);
	if (plik.good() == true)
	{
		plik >> bufLogin;
		plik >> bufHaslo;
	}

	if (bufLogin == login && bufHaslo == haslo)
	{
		cout << "Zostales zalogowany" << endl << endl;
		system("PAUSE");
	}
	else
	{
		cout << "Podano zly login lub haslo" << endl << endl;
		system("PAUSE");
	}
}


int _tmain()
{
	int n;
	cout << "wprowadz 1 jeœli chcesz wprowadziæ Pracownika" << endl;
	cout << "wprowadz 2 jeœli chcesz wprowadziæ Pracodawce" << endl;
	cout << "wprowadz 3 jeœli chcesz sie zalogowac" << endl;
	cout << "wprowadz 4 jeœli chcesz obejrzeæ oferty pracy" << endl;
	cin >> n;
	switch( n )
	{
	case 1:
		{
		Pracownik p1;
		p1.load();
		p1.show();
	}
		break;
	case 2:
		{
		Pracodawca p2;
		p2.load();
		p2.show();
		}
		break;
		case 3:
		{
		 logowanie();
		}
		break;
		case 4:
		{
			rejestracja()
		}
		break;
	default:
        std::cout << "ani jeden, ani dwa" << std::endl;
        break;
	}

	_getch();
	return 0;
}
