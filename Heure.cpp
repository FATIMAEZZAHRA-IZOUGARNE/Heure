#include "Heure.h"
#include "DateHeure.h"


//constructeur
Heure::Heure(int h, int min, int sec)
{
	if (h >= 0 && h < 24) {
		this->heure = h;
	}
	else {
		this->heure = 0;
	}

	if (min >= 0 && min < 60) {
		this->minute = min;
	}
	else {
		this->minute = 0;
	}

	if (sec >= 0 && sec < 60) {
		this->second = sec;
	}
	else {
		this->second = 0;
	}
	
}


//methode afficher 
void Heure::afficher() const
{
	cout << this->heure << " : " << this->minute << " : " << this->second << endl;
}

bool Heure::operator>(const Heure& h) const
{
	if (heure > h.heure)
		return true;
	else if (heure == h.heure && minute > h.minute)
		return true;
	else if (heure == h.heure && minute == h.minute && second > h.second)
		return true;
	else
	return false;
}

Heure::~Heure()
{
	cout << "call for destructor of the Classe Heure" << endl;
}
