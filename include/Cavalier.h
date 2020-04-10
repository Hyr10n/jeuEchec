#ifndef CAVALIER_H
#define CAVALIER_H

#include <Piece.h>
#include <string>

using namespace std;

class Cavalier : public Piece
{
    public:
        Cavalier(int val, int val2);
        virtual ~Cavalier();

        virtual void afficher();

    protected:

    private:
};

#endif // CAVALIER_H
