#ifndef TOUR_H
#define TOUR_H

#include <Piece.h>
#include <string>

using namespace std;

class Tour : public Piece
{
    public:
        Tour(int val, int val2);
        virtual ~Tour();

        virtual void afficher();

    protected:

    private:
};

#endif // TOUR_H
