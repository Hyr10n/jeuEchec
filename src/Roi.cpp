#include "Roi.h"
#include <Piece.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Roi::Roi(int val, int val2):Piece(val, val2, "Roi")
{

}

Roi::~Roi()
{
    //dtor
}

void Roi::afficher(){
    cout <<"L'ID : " << this->getId()  << "\nEquipe : " << this->getEquipe() << endl;
}
