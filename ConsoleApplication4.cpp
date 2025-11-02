// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once
#include <iostream>
#include "Heure.h"
#include "DateHeure.h"
using namespace std;

int main() {
    // Création de deux objets Heure
    Heure h1(13, 45, 30);
    Heure h2(12, 59, 59);

    cout << "Heure 1 ---> ";
    h1.afficher();

    cout << "Heure 2 ---> ";
    h2.afficher();

    // Test de la comparaison avec >
    if (h1 > h2)
        cout << "Heure 1 est plus tardive que Heure 2" << endl;
    else
        cout << "Heure 1 n'est pas plus tardive que Heure 2" << endl;

    // Test avec une heure invalide
    Heure h3(25, 70, -5);
    cout << "\nHeure 3 (valeurs invalides corrigees) : ";
    h3.afficher();



    cout << "------------------------------------------------------------------" << endl;
    DateHeure d1(10, 30, 0, 1, 11, 2025);
    DateHeure d2(23, 59, 59, 31, 10, 2025);

    cout << "DateHeure 1 --> ";
    d1.afficherDH();

    cout << "DateHeure 2 --> ";
    d2.afficherDH();

    if (d1 > d2)
        cout << "DateHeure 1 est plus tardive que DateHeure 2" << endl;
    else
        cout << "DateHeure 1 n'est pas plus tardive que DateHeure 2" << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
