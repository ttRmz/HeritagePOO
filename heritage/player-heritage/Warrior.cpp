#include "Warrior.h"

using namespace std;

Warrior::Warrior() : Player()
{
    m_life = 200;
    m_name = "Warrior";
}

Warrior::Warrior(std::string name) : Player(name)
{
    // m_life = 200;
    m_name = name;
}

void Warrior::hammer(Player &target)
{
    cout << m_name << " donne un coup de marteau" << endl;
    target.takeDamages(DEF_WARRIOR_HAMMER_DAMAGES);
}
