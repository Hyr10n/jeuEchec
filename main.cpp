#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <Pion.h>
using namespace std;
/*
int initialiserTourBlanc(){
}
int initialiserTourNoire(){
}
int initialiserTour(){
    initialiserTourBlanc();
    initialiserTourNoire();
}
*/
int initialiserPionBlanc(){
 int equipeBlanc = 1;

    //equipe blanche -> 1
    cout << "Les blancs" << endl;
    for(int i =1;i<=8;i++){
        Pion *monPion = new Pion(i, equipeBlanc);
        //monPion->afficher();
        cout << "PB" << i << endl;
    }
}

int initialiserPionNoire(){
 int equipeNoire = 2;

    //equipe noire -> 2
    cout << "Les noires" << endl;
    for(int i =1;i<=8;i++){
        Pion *monPion = new Pion(i, equipeNoire);
        //monPion->afficher();
        cout << "PN" << i << endl;
    }
}

int initialiserPion(){

    initialiserPionBlanc();
    initialiserPionNoire();

}

int initialiserPieceEnJeu(){
    initialiserPion();
    //system("cls");
    //initialiserTour();
}

int menuJeu(){
    int jouer;
    cout << "Bienvenu sur le jeu d'Echec,\nDevelopper par Briac, Samuel et Valentin!" <<  endl;
    cout << "Souhaitez-vous jouer ? 1 = NON | 2 = OUI : " << endl;
    cin >> jouer;
    if (jouer != 1) {
        cout << "fin du jeu!" <<  endl;
        return 0;
    }
}

int affichageDuPlateau(){
    cout << "La plateau de jeu!" << endl;
}

int main()
{
    menuJeu();
    initialiserPieceEnJeu();
    affichageDuPlateau();
    return 0;
}
