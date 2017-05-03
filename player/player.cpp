#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class Player
{
    public:
        Player (string name, int life, int weaponDamages)
        {
            m_name = name;
            m_life = life;
            m_weaponDamages = weaponDamages;
        }

        void takeDamages(int damages)
        {
            m_life -= damages;
            cout << m_name << " prend " << damages << " dégats" << endl;
        }

        void attack(Player &target)
        {
            target.takeDamages(m_weaponDamages);
        }

        void heal(int amount)
        {
            m_life += amount;
            cout << m_name << " se soigne de " << amount << endl;
        }

        bool isAlive()
        {
            return (m_life > 0);
        }

        void setLife(int value)
        {
            if (value > 0) {
                m_life = value;
            }
        }

        int getLife()
        {
            return m_life;
        }

        string getName()
        {
            return m_name;
        }

        void displayState()
        {
            cout << m_name << " (" << m_life << ")";
        }

    private:
        int m_life;
        int m_weaponDamages;
        string m_name;
};


int randBetween(int a, int b){
    return rand() % (b - a) + a;
}


int main()
{
    Player A ("A", 100, 10);
    Player B ("B", 100, 10);

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



