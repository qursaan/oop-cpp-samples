#include <iostream>

using namespace std;

class Player
{
    protected:
        int speed;
    public:
        virtual void Shoot()
        {
            speed = 10;
        }
        void DoShoot()
        {
            Shoot();
            cout << "Speed: " << speed << endl;
        }
       
};
class GoalPlayer: public Player
{
    public:
        void Shoot()
        {
            speed = 20;
        }
};

int main()
{
    Player p;
    p.DoShoot();

    GoalPlayer gp;
    gp.DoShoot();

    return 0;
}
