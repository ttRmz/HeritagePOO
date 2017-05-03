#ifndef DEF_PLAYER
#define DEF_PLAYER

#include <string>

class Player
{
public:
    Player();
    Player(std::string name, int life, int weaponDamages);

    void takeDamages(int damages);
    void attack(Player &target) const;
    void heal(int amount);
    bool isAlive() const;
    int getLife() const;
    std::string getName() const;
    void displayState() const;

private:
    int m_life;
    int m_weaponDamages;
    std::string m_name;
};

#endif
