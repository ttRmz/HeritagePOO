#include <iostream>
#include <string>
#include <time.h>

#include "player.h"

using namespace std;

int randBetween(int a, int b){
    return rand() % (b - a) + a;
}


int main()
{
    Player A ("A", 100, 10);
    Player B ("B", 60, 20);

    srand(time(NULL));

    while (A.isAlive() && B.isAlive())
    {
        A.displayState();
        cout << " VS ";
        B.displayState();
        cout << endl;

        if (randBetween(0, 2) == 1) {
            A.attack(B);
        } else {
            B.attack(A);
        }
    }

    if (A.isAlive())
    {
        cout << A.getName() << " est victorieux" << endl;
    } else {
        cout << B.getName() << " est victorieux" << endl;
    }
}

