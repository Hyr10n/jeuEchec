#include "Dame.h"
#include <Piece.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Dame::Dame(int val, int val2):Piece(val, val2, "Dame")
{

    /*this->setLife(true); //les pions sont toujours en vie donc toujours sur le plateau
    this->equipe = monEquipe;
    this->id =  to_string(monEquipe) + "P" + to_string(numeroPion);
    this->afficher();*/

}

Dame::~Dame()
{
    //dtor
}

//afficher les informations du pion
void Dame::afficher(){
    cout <<"L'ID : " << this->getId()  << "\nEquipe : " << this->getEquipe() << endl;
}
