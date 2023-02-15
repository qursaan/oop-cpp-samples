#include <iostream>
using namespace std;

// define dog class
class dog{
    public:
        void run();
        bool set_speed(int s){
            if (s>0 && s<=100)
            {
                m_speed = s;
                return true;
            }
            return false;
        }
    private:
        int m_speed;
        int m_age;
        string m_type;
}; //<-- end of class definition

int main()
{
    dog x; //object of class dog

    x.set_speed(50); //accessing member function of class dog using dot operator
 
    x.run();

    dog y[10]; //array of objects of class dog

    y[0].set_speed(50);

    y[0].run();

    dog *z = new dog; //pointer to object of class dog

    z->set_speed(50); //accessing member function of class dog using arrow operator

    z->run();

    return 0;
}