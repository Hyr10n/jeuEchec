#include "Dame.h"
#include <Piece.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Dame::Dame(int val, int val2):Piece(val, val2, "Dame")
{

}

Dame::~Dame()
{
    //dtor
}

void Dame::afficher(){
    cout <<"L'ID : " << this->getId()  << "\nEquipe : " << this->getEquipe() << endl;
}
