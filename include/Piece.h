#ifndef PIECE_H
#define PIECE_H

#include <string>

using namespace std;

class Piece
{
    public:
        Piece(int val, int equipe, string namePiece);
        virtual ~Piece();

        string getNamePiece();
        void setNamePiece(string val);

        string getId();
        void setId(string val);

        int getEquipe();
        void setEquipe(int val);

        int getX();

        int getY();

        int deplacer(int dX, int dY);

        void afficher();

    protected:
        int nbrCoup();

        //virtual void deplacemement();
        //virtual bool deplacementEstPossible();

    private:
        string namePiece;
        bool life;
        string id;
        int equipe;
        int x = 0;
        int y = 0;

};



#endif // PIECE_H
