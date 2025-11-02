#pragma once
#include <iostream>
using namespace std;

class Heure
{
protected:
	int heure;
	int minute;
	int second;
public:
	
	Heure(int h = 0, int min = 0, int sec = 0);
	void afficher() const;

	// --- Opérateur > ---
    // Compare deux objets Heure
	bool operator>(const Heure& h) const;
	~Heure();

};

