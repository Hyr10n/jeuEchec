#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <Tour.h>
#include <Pion.h>
#include <Cavalier.h>
#include <Dame.h>
#include <Roi.h>
#include <Fou.h>

using namespace std;

int initialiserPionBlanc(){
 int equipeBlanc = 2;

    //equipe blanche -> 1
    cout << " \n\nLes Pions Blancs" << endl;
    for(int i =1;i<=8;i++){
        Pion *monPion = new Pion(i, equipeBlanc);
        //monPion->afficher();
    }
}

int initialiserPionNoire(){
 int equipeNoire = 1;

    //equipe noire -> 2
    cout << "\n\nLes Pions Noires" << endl;
    for(int i =1;i<=8;i++){
        Pion *monPion = new Pion(i, equipeNoire);
        //monPion->afficher();
    //stocker les pions
    }
}


initialiserTourBlanc(){
int equipeBlanc = 2;

    //equipe noire -> 2
    cout << "\n\nLes Tours Blanches" << endl;
    for(int i =1;i<=2;i++){
        Tour *maTour = new Tour(i, equipeBlanc);
    //stocker les pions
    }
}

initialiserTourNoire(){
 int equipeNoire = 1;

    //equipe noire -> 2
    cout << "\n\nLes Tours Noires" << endl;
    for(int i =1;i<=2;i++){
        Tour *maTour = new Tour(i, equipeNoire);
    //stocker les pions
    }
}


initialiserCavalierBlanc(){
 int equipeBlanc = 2;

    //equipe noire -> 2
    cout << "\n\nLes Cavaliers Blancs" << endl;
    for(int i =1;i<=2;i++){
        Cavalier *monCavalier = new Cavalier(i, equipeBlanc);
    //stocker les pions
    }
}

initialiserCavalierNoire(){
 int equipeNoire = 1;

    //equipe noire -> 2
    cout << "\n\nLes Cavaliers Noires" << endl;
    for(int i =1;i<=2;i++){
        Cavalier *monCavalier = new Cavalier(i, equipeNoire);
    //stocker les pions
    }
}


initialiserFouBlanc(){
 int equipeBlanc = 2;

    //equipe noire -> 2
    cout << "\n\nLes Fou Blancs" << endl;
    for(int i =1;i<=2;i++){
        Fou *monFou = new Fou(i, equipeBlanc);
    }
    //stocker les pions

}

initialiserFouNoire(){
 int equipeNoire = 1;

    //equipe noire -> 2
    cout << "\n\nLes Fou Noires" << endl;
    for(int i =1;i<=2;i++){
        Fou *monFou = new Fou(i, equipeNoire);
    //stocker les pions
    }
}


initialiserRoiBlanc(){
 int equipeBlanc = 2;

    cout << "\n\nLe Roi blanc" << endl;
    Roi *monRoi = new Roi(0, equipeBlanc);
}

initialiserRoiNoire(){
 int equipeNoire = 1;

    cout << "\n\nLe Roi Noire" << endl;
    Roi *monRoi = new Roi(0, equipeNoire);
    //stocker les pions
}


initialiserDameBlanc(){
 int equipeBlanc = 2;

    cout << "\n\nLa Dame Blanc" << endl;
    Dame *maDame = new Dame(0, equipeBlanc);
    //stocker
}

initialiserDameNoire(){
 int equipeNoire = 1;

    cout << "\n\nLa Dame Noire" << endl;
    Dame *maDame = new Dame(0, equipeNoire);
    //stocker les pions
}

int initialiserPieceEnJeu(){

    initialiserPionBlanc();
    initialiserPionNoire();

    initialiserTourBlanc();
    initialiserTourNoire();

    initialiserCavalierBlanc();
    initialiserCavalierNoire();

    initialiserFouBlanc();
    initialiserFouNoire();

    initialiserRoiBlanc();
    initialiserRoiNoire();

    initialiserDameBlanc();
    initialiserDameNoire();


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
