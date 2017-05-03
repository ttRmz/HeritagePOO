#ifndef DEF_PLAYER
#define DEF_PLAYER

#define DEF_PLAYER_PUNCH_DAMAGES 1

#include <iostream>
#include <string>

class Player
{
    public:
        Player();
        Player(std::string name);

        void takeDamages(int amount);
        void punch(Player &target) const;

        // Liaison tardive
        // virtual void displayState() const = 0;
        void displayState() const;

        bool isAlive() const;

        std::string getName() const;

    protected:
        int m_life;
        std::string m_name;
};

#endif






