#ifndef PLAYER_H
#define PLAYER_H

//Class Definition
class Player    
{
    public:
        Player();                   //Default Constructor
        Player(int,double);         //Parameterized Constructor
        void increaseSpeed(double); //Increase Speed Function
    private:
        int id;                     //Player ID
        double speed;               //Player Speed
        double max_speed;           //Player Max Speed
};

#endif // PLAYER_H
