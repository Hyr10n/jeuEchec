#ifndef DAME_H
#define DAME_H

#include <Piece.h>
#include <string>

using namespace std;

class Dame : public Piece
{
    public:
        Dame(int val, int val2);
        virtual ~Dame();

        virtual void afficher();

    protected:

    private:
};

#endif // DAME_H
