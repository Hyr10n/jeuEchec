#include "Cavalier.h"
#include <Piece.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Cavalier::Cavalier(int val, int val2):Piece(val, val2, "Cavalier")
{

    /*this->setLife(true); //les pions sont toujours en vie donc toujours sur le plateau
    this->equipe = monEquipe;
    this->id =  to_string(monEquipe) + "P" + to_string(numeroPion);
    this->afficher();*/

}

Cavalier::~Cavalier()
{
    //dtor
}

//afficher les informations du pion
void Cavalier::afficher(){
    cout <<"L'ID : " << this->getId()  << "\nEquipe : " << this->getEquipe() << endl;
}
