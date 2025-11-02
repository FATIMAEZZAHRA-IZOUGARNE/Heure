#pragma once
#include "Heure.h"

class DateHeure : public Heure
{
private:
    int jour;
    int mois;
    int year;
public:
    DateHeure(int h=0, int min=0, int sec=0, int j=1, int mois=1, int ans=2000);
    void afficherDH() const;
    // --- Opérateur > ---
    bool operator>(const DateHeure& d) const;
    ~DateHeure();
};

