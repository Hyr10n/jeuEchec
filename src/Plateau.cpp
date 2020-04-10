#include "Plateau.h"
#include <vector>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <Piece.h>


int Plateau::getLargeur() { return this->largeur; }
int Plateau::getHauteur() { return this->hauteur; }

void Plateau::ajouterPiece(Piece* p){

this->pieces.push_back(p);

}


void Plateau::afficher() {
int valeur = 0;
        for (int y = 0; y < this->hauteur; y++) {
            for (int x = 0; x < this->largeur; x++) {
                string c = "   ";
                for (int i=0;i<this->pieces.size();i++){
                    if ((this->pieces[i]->getX()==x)&&(this->pieces[i]->getY()==y)){
                        c = this->pieces[i]->getId();
                    }
                }
            cout << c << "|";

                }
                cout << endl;

            }
        }
