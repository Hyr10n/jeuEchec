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

        virtual void afficher();

    protected:

    private:
};

#endif // PION_H
