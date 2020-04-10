#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <Tour.h>
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
    cout << "Les Pions Blancs" << endl;
    for(int i =1;i<=8;i++){
        Pion *monPion = new Pion(i, equipeBlanc);
        //monPion->afficher();
    }
}

int initialiserPionNoire(){
 int equipeNoire = 2;

    //equipe noire -> 2
    cout << "Les Pions Noires" << endl;
    for(int i =1;i<=8;i++){
        Pion *monPion = new Pion(i, equipeNoire);
        //monPion->afficher();
    //stocker les pions
    }
}

initialiserTourBlanc(){
int equipeBlanc = 2;

    //equipe noire -> 2
    cout << "Les Tours Blanches" << endl;
    for(int i =1;i<=2;i++){
        Tour *maTour = new Tour(i, equipeBlanc);
    //stocker les pions
    }
}

initialiserTourNoire(){
 int equipeNoire = 1;

    //equipe noire -> 2
    cout << "Les Tours Noires" << endl;
    for(int i =1;i<=2;i++){
        Tour *maTour = new Tour(i, equipeNoire);
    //stocker les pions
    }
}

int initialiserPieceEnJeu(){
    initialiserPionBlanc();
    initialiserPionNoire();
    initialiserTourBlanc();
    initialiserTourNoire();


    //system("cls");
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
    cout << "La plateau de jeu!\nCode de Briac!" << endl;
}

int main()
{
    menuJeu();
    initialiserPieceEnJeu();
    affichageDuPlateau();
    return 0;
}
