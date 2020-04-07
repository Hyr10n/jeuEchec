#ifndef PIECE_H
#define PIECE_H
#include <string>

using namespace std;

class Piece
{
    public:
        Piece();
        virtual ~Piece();

    protected:
        void deplacemement();
        bool deplacementEstPossible();

    private:
};

#endif // PIECE_H
