#include "Wizard.h"

using namespace std;

Wizard::Wizard() : Player(), m_mana(100)
{
    m_name = "Wizard";
}

void Wizard::castFireball(Player &target)
{
    if (m_mana > DEF_WIZARD_FIREBALL_COST) {
        cout << m_name << " lance une boule de feu" << endl;
        target.takeDamages(DEF_WIZARD_FIREBALL_DAMAGES);
        m_mana -= DEF_WIZARD_FIREBALL_COST;
    }
}

void Wizard::castFrostbolt(Player &target)
{
    if (m_mana > DEF_WIZARD_FROSTBOLT_COST) {
        cout << m_name << " lance une boule de glace" << endl;
        target.takeDamages(DEF_WIZARD_FROSTBOLT_DAMAGES);
        m_mana -= DEF_WIZARD_FROSTBOLT_COST;
    }
}

// Masquage
void Wizard::displayState() const
{
    cout << m_name << " (Vie: " << m_life << "; Mana: " << m_mana << ")";
}

