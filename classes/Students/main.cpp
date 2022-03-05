#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Student A(3); //<- call constructor
    A.addScore(75,0);
    A.addScore(90,1);
    A.addScore(99,2);
	A.print();
    return 0;
}//<-call destructor
