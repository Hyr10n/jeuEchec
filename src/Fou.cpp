#include "Fou.h"
#include <Piece.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Fou::Fou(int val, int val2):Piece(val, val2, "Fou")
{

}

Fou::~Fou()
{
    //dtor
}

void Fou::afficher(){
    cout <<"L'ID : " << this->getId()  << "\nEquipe : " << this->getEquipe() << endl;
}
