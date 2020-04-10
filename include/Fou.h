#ifndef FOU_H
#define FOU_H

#include <Piece.h>
#include <string>

using namespace std;

class Fou : public Piece
{
    public:
        Fou(int val, int val2);
        virtual ~Fou();

        virtual void afficher();

    protected:

    private:
};

#endif // FOU_H
