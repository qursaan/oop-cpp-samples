#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player(int,double);
        void increaseSpeed(double);
    private:
        int id;
        double speed;
        double max_speed;
};

#endif // PLAYER_H
