#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <Pion.h>
using namespace std;


int initialiserPion(){

    //equipe blanche -> 1
    cout << "Les blancs" << endl;
    for(int i =1;i<=8;i++){
    int equipeBlanc = 1;
        Pion *monPion = new Pion(i/*, equipeBlanc*/);
        //monPion->afficher();
        cout << "PB" << i << endl;
    }
    //equipe noire -> 2
    cout << "Les noires" << endl;
    for(int i =1;i<=8;i++){
    int equipeNoire = 2;
        Pion *monPion = new Pion(i/*, equipeNoire*/);
        //monPion->afficher();
        cout << "PN" << i << endl;
    }
}

/*int initialiserPi�ceEnJeu(){
*/

int main()
{
    cout << "Jeu d'�chec!" << endl;
    initialiserPion();
    return 0;
}

