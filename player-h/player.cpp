#include <iostream>
#include <string>
#include <time.h>

#include "player.h"

using namespace std;

Player::Player()
{

}

Player::Player (string name, int life, int weaponDamages)
{
    m_name = name;
    m_life = life;
    m_weaponDamages = weaponDamages;
}

void Player::takeDamages(int damages)
{
    m_life -= damages;
    cout << m_name << " prend " << damages << " dégats" << endl;
}

void Player::attack(Player &target) const
{
    target.takeDamages(m_weaponDamages);
}

void Player::heal(int amount)
{
    m_life += amount;
    cout << m_name << " se soigne de " << amount << endl;
}

bool Player::isAlive() const
{
    return (m_life > 0);
}

int Player::getLife() const
{
    return m_life;
}

string Player::getName() const
{
    return m_name;
}

void Player::displayState() const
{
    cout << m_name << " (" << m_life << ")";
}

