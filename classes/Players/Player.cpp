#include "Player.h"

Player::Player(int id, double max_speed)
{
   this->id = id;
   this->max_speed = max_speed;
}

void Player::increaseSpeed(double step)
{
    if(step+speed < max_speed){
        speed+=step;
    }else{
        speed=max_speed;
    }
}
