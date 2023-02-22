#include "Player.h"

///Default Constructor Implementation
Player::Player()
{
   id = 0;                   //Set Player ID to 0
   max_speed = 0;            //Set Player Max Speed to 0
}

///Parameterized Constructor Implementation
Player::Player(int id, double max_speed)
{
   this->id = id;                   //Set Player ID  
   this->max_speed = max_speed;     //Set Player Max Speed
}

///Increase Speed Function Implementation
void Player::increaseSpeed(double step)
{
    if(step+speed < max_speed){
        speed+=step;
    }else{
        speed=max_speed;
    }
}
