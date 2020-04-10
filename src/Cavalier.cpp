#include "Cavalier.h"
#include <Piece.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Cavalier::Cavalier(int val, int val2):Piece(val, val2, "Cavalier")
{

}

Cavalier::~Cavalier()
{
    //dtor
}

void Cavalier::afficher(){
    cout <<"L'ID : " << this->getId()  << "\nEquipe : " << this->getEquipe() << endl;
}
