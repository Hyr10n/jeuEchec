#ifndef PION_H
#define PION_H

#include <Piece.h>
#include <string>

using namespace std;

class Pion : public Piece
{
    public:
        Pion(int val, int val2);
        virtual ~Pion();

        bool getLife();
        void setLife(bool val);

        string getId();
        void setId(string val);

        int getEquipe();
        void setEquipe(int val);


        void afficher();

    protected:
        int nbrCoup();
        bool estVivant();

    private:
        string name;
        bool life;
        string id;
        int equipe;



};

#endif // PION_H
