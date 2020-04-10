#include "Piece.h"
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Piece::Piece(int numeroPiece, int monEquipe, string maPiece)
{

    this->equipe = monEquipe;
    this->namePiece = maPiece;
    this->id =  to_string(monEquipe) + maPiece[0] + to_string(numeroPiece);
    this->afficher();

}

Piece::~Piece()
{
    //dtor
}

string Piece::getNamePiece(){
    return this->namePiece;
}

void Piece::setNamePiece(string val){
    this->namePiece = val;
}

//set l'id du Piece
string Piece::getId(){
    return this->id;
}
//get id du Piece
void Piece::setId(string val){
    this->id =  val;
}
//get la couleur de l'�quipe
int Piece::getEquipe(){
    return this->equipe;

}
//set la couleur de l'�quipe
void Piece::setEquipe(int val){
    this->equipe = val;
}

int Piece::getX(){
     return this->x;
}

int Piece::getY(){
    return this->y;
}

int Piece::deplacer(int dX, int dY){

    this->x = dX;
    this->y = dY;

}

//afficher les informations du Piece
void Piece::afficher(){
    cout << "\nRef : " << this->getId() << "\nEquipe : " << this->getEquipe() << endl;
}
