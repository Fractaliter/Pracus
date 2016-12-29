#pragma once
#include <string>
#include <iostream>

using namespace std;
class Pracownik
{
public:

	int wiek;
	string imie, login, haslo;
public:
	Pracownik(int = 1, string = "brak");
	~Pracownik();
	void load();
	void show();
	friend void login();
};

