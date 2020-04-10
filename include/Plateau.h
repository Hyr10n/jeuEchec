#ifndef PLATEAU_H
#define PLATEAU_H
#include <vector>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <Piece.h>

using namespace std;

class Plateau
{

     private:
        int largeur;
        int hauteur;
        int boole;
        int x;
        int y;
        int value;
        vector<Piece*> pieces;


    public:
        Plateau(int largeur, int hauteur){
        this->largeur = largeur;
        this->hauteur = hauteur;

        }

        int getLargeur();
        int getHauteur();

        void ajouterPiece(Piece* p);

    void afficher();



};

#endif // PLATEAU_H
