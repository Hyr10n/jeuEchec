#include "Pion.h"
#include <Piece.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Pion::Pion(int numeroPion, int monEquipe)
{

    this->setLife(true); //les pions sont toujours en vie donc toujours sur le plateau
    this->equipe = monEquipe;
    this->id =  to_string(monEquipe) + "P" + to_string(numeroPion);
    this->afficher();

}

Pion::~Pion()
{
    //dtor
}

bool Pion::getLife() {
    return this->life;
}

void Pion::setLife(bool val) {
    this->life = val;
}

bool Pion::estVivant(){

    return this->getLife();

}
//set l'id du pion
string Pion::getId(){
    return this->id;
}
//get id du pion
void Pion::setId(string val){
    this->id =  val;
}
//get la couleur de l'équipe
int Pion::getEquipe(){
    return this->equipe;

}
//set la couleur de l'équipe
void Pion::setEquipe(int val){
    this->equipe = val;
}


//afficher les informations du pion
void Pion::afficher(){
    cout <<"Le pion : " << this->getId() << " Bool vie : " << this->getLife() << "Ca couleur est : " << this->getEquipe() << endl;
    estVivant();
}
