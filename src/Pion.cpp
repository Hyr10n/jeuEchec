#include "Pion.h"
#include <Piece.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Pion::Pion(int numeroPion/*, int monEquipe*/)
{

    this->setLife(life);
    this->id = to_string(numeroPion);
    /*this->setEquipe(monEquipe)*/
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
string Pion::getEquipe(){
    return this->getEquipe();
}
//set la couleur de l'équipe
void Pion::setEquipe(string val){
    this->equipe = val;

    /*
    if (val == 1){
        cout << "Blanc" << endl;
    }
    if (val == 2){
        cout << "Noire" << endl;
    }*/

}


//afficher les informations du pion
void Pion::afficher(){
    cout <<"Le pion : " << this->getId() << " Bool vie : " << getLife() /*<< "Ca couleur est : " << getEquipe()*/ << endl;
    estVivant();
}
