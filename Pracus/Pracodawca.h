#pragma once
#include <string>
#include <iostream>

using namespace std;

class Pracodawca
{
public:
	int wiek;
	string imie, login, haslo;
public:
	Pracodawca(int = 1, string = "brak");
	~Pracodawca();
	void load();
	void show();
	friend void login();

};

