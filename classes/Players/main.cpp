#include <iostream>
#include "Player.h" //Include Player Header File

using namespace std;

int main()
{
    Player p1(10,9.5);      //Create Player 1 Using Parameterized Constructor

    p1.increaseSpeed(1.2); //Increase Player 1 Speed

    return 0;
}
