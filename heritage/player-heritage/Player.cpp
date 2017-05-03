#include "Player.h"

using namespace std;

Player::Player() : m_life(100), m_name("NoName")
{

}
Player::Player(string name) : m_life(100), m_name(name)
{

}

void Player::takeDamages(int amount)
{
    m_life -= amount;
}

void Player::punch(Player &target) const
{
    target.takeDamages(DEF_PLAYER_PUNCH_DAMAGES);
}

void Player::displayState() const
{
    cout << m_name << " (" << m_life << ")";
}

bool Player::isAlive() const
{
    return (m_life > 0);
}

string Player::getName() const
{
    return m_name;
}
