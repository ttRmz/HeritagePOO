#ifndef DEF_WARRIOR
#define DEF_WARRIOR

#define DEF_WARRIOR_HAMMER_DAMAGES 4

#include <iostream>
#include <string>
#include "Player.h"

class Warrior : public Player
{
    public:
        Warrior();
        Warrior(std::string name);

        void hammer(Player &target);
};

#endif
