#ifndef PION_H
#define PION_H

#include <Piece.h>
#include <string>

using namespace std;

class Pion : public Piece
{
    public:
        Pion(int val);
        virtual ~Pion();

        bool getLife();
        void setLife(bool val);

        string getId();
        void setId(string val);

        string getEquipe();
        void setEquipe(string val);


        void afficher();

    protected:
        int nbrCoup();
        bool estVivant();

    private:
        string name;
        bool life;
        string id;
        string equipe;



};

#endif // PION_H
