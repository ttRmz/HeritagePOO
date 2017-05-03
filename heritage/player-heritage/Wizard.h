#ifndef DEF_WIZARD
#define DEF_WIZARD

#define DEF_WIZARD_FIREBALL_COST 4
#define DEF_WIZARD_FIREBALL_DAMAGES 6

#define DEF_WIZARD_FROSTBOLT_COST 2
#define DEF_WIZARD_FROSTBOLT_DAMAGES 3

#include <iostream>
#include <string>
#include "Player.h"

class Wizard : public Player
{
    public:
        Wizard();

        void castFireball(Player &target);
        void castFrostbolt(Player &target);

        void attack(Player &target);

        void displayState() const;


    private:
        int m_mana;
};

#endif
