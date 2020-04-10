#include "Pion.h"
#include <Piece.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Pion::Pion(int val, int val2):Piece(val, val2, "Pion")
{

}

Pion::~Pion()
{
    //dtor
}

void Pion::afficher(){
    cout <<"L'ID : " << this->getId()  << "\nEquipe : " << this->getEquipe() << endl;
}
