#include <iostream>
#include "contact.h"

using namespace std;

int main()
{
    contact c1(10); // create a contact list with 10 users

    contact c2[5]; // create an array of 5 contact lists with 10 users each

    contact **c3 = new contact*[5]; // create an array of 5 pointers to contact lists
    c3[0] = new contact(10); // create a contact list with 10 users
    c3[1] = new contact(20); // create a contact list with 20 users
    c3[2] = new contact(30); // create a contact list with 30 users
    c3[3] = new contact(40); // create a contact list with 40 users
    c3[4] = new contact(50); // create a contact list with 50 users

    //to delete the memory allocated for c3
    for(int i=0; i<5; i++)
        delete c3[i];
    delete [] c3;
    
    return 0;
}
