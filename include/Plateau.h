#ifndef PLATEAU_H
#define PLATEAU_H
#include <vector>
#include <cstdlib>
#include <string>
#include <windows.h>
using namespace std;

class Piece{

    private :



    public :



};




class Plateau
{

     private:
        vector<int> tableau;
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
        tableau.resize(hauteur * largeur);

        }
        set(int x, int y, int value){
        this->x = x;
        this->y = y;
        this->tableau[this->getIndice(x, y)] = value;

        }

        int getIndice(int x, int y);
        int getLargeur();
        int getHauteur();


    int get(int x, int y);

    void afficher();



};

#endif // PLATEAU_H
