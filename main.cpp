#include <iostream>
#include "Plateau.h"
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    Plateau plateau(8, 8);
    plateau.set(1, 1, 1);
    plateau.set(2, 2, 6);
    plateau.afficher();

    return 0;
}

