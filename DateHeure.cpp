#include "DateHeure.h"
#include "Heure.h"


//constructeur
DateHeure::DateHeure(int h, int min, int sec, int j, int mois, int ans) 
	: Heure(h, min, sec), jour(j), mois(mois), year(ans)
{

}

//methode afficher
void DateHeure::afficherDH() const
{
	Heure::afficher();
	cout << this->jour << "/" << this->mois << "/" << this->year << endl;
}


bool DateHeure::operator>(const DateHeure& d) const
{
    if (year > d.year) return true;
    if (year < d.year) return false;

    if (mois > d.mois) return true;
    if (mois < d.mois) return false;

    if (jour > d.jour) return true;
    if (jour < d.jour) return false;

    // Si la date est la même, on compare l’heure
    return Heure::operator>(d);
}

//destructeur
DateHeure::~DateHeure()
{
	cout<< "call for destructor of the Classe DateHeure" << endl;
}


