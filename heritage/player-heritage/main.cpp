#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>

#include "Player.h"
#include "Warrior.h"
#include "Wizard.h"

using namespace std;

int randBetween(int a, int b){
    return rand() % (b - a) + a;
}


int main()
{
    Warrior A;
    Wizard B;

    srand(time(NULL));

    while (A.isAlive() && B.isAlive())
    {
        A.displayState();
        cout << " VS ";
        B.displayState();
        cout << endl;

        if (randBetween(0, 2) == 1) {
            A.hammer(B);
        } else {
            if (randBetween(0, 2) == 1) {
                B.castFireball(A);
            } else {
                B.castFrostbolt(A);
            }
        }
    }

    if (A.isAlive())
    {
        cout << A.getName() << " est victorieux" << endl;
    } else {
        cout << B.getName() << " est victorieux" << endl;
    }
}


