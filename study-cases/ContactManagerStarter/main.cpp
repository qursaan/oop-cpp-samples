#include <iostream>
#include "contacts.h"

using namespace std;

int main()
{
    int c=-1;
    contacts contact(10); // contacts size = 10

    while(c!=0){
        cout <<"1. Print All Contacts\n"
             <<"2. Add New User\n"
             <<"3. Search \n"
             <<"4. Edit Existing User\n"
             <<"5. Delete User\n"
             <<"0. Quit\n";

        cin >> c;
        switch(c){
        case 1:
            contact.print();
            break;
        case 2:
            contact.addNewUser();
            break;
        case 3:
            string key;
            cout << "Enter your keyword to find: ";
            getline(cin, key);
            contact.findAll(key);
            break;
            //student to continue
            // case 4:
            //    break;
            // case 5:
            //    break:
        }
    }
    cout << "Thanks!" << endl;
    return 0;
}
