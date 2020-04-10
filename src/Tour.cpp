#include "Tour.h"
#include <Piece.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Tour::Tour(int val, int val2):Piece(val, val2, "Tour")
{

}

Tour::~Tour()
{
    //dtor
}

void Tour::afficher(){
    cout <<"L'ID : " << this->getId()  << "\nEquipe : " << this->getEquipe() << endl;
}
