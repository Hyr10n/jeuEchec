#ifndef ROI_H
#define ROI_H

#include <Piece.h>
#include <string>

using namespace std;

class Roi : public Piece
{
    public:
        Roi(int val, int val2);
        virtual ~Roi();

        virtual void afficher();

    protected:

    private:
};

#endif // ROI_H
