#include "Plateau.h"
#include <vector>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <vector>
#include <cstdlib>
#include <iostream>


int Plateau::getIndice(int x, int y) { return y * largeur +x; }
int Plateau::getLargeur() { return this->largeur; }
int Plateau::getHauteur() { return this->hauteur; }

int Plateau::get(int x, int y) {
    return this->tableau[this->getIndice(x, y)];
    }





void Plateau::afficher() {
int valeur = 0;
        for (int y = 0; y < this->hauteur; y++) {
            for (int x = 0; x < this->largeur; x++) {
                    valeur = this->get(x, y);
                    if (valeur < 10) {  cout <<  "|  |" ; }
                    cout <<  valeur ;

                }
                cout << endl;

            }
        }
