#include <iostream>
#include "contacts.h"
using namespace std;

int main()
{
    int c=-1;
    //create contact object
    contacts contact(100); //100 users

    while(c!=0)
    {
        cout<< "-------------------------------\n"
            << "1. Print All Users\n"
            << "2. Add New User\n"
            << "3. Search\n"
            << "4. Edit Existing User\n"
            << "5. Delete Existing User\n"
            << "0. Quit\n"
            << "Enter your choice: ";
        cin>> c;
        cout<< "-------------------------------\n";

        switch(c)
        {
        case 1:
            //print all users;
            contact.print();
            break;
        case 2:
            //add new user;
            contact.addNewUser();
            break;
        case 3:
            //search for a user/users
            {
                string key;
                cout<<"Enter your keyword to find: ";
                cin.ignore();
                getline(cin,key);
                contact.findAll(key);
            }
            break;
        case 4:
            //edit user
            {
                int edit_id=0;
                cout<<"Enter user Id to edit: ";
                cin>>edit_id;
                contact.editUser(edit_id);
            }
            break;
        case 5:
            //delete user
            {
                int del_id=0;
                cout<<"Enter user Id to delete: ";
                cin>>del_id;
                contact.detUser(del_id);
            }
            break;

        }

    }
    cout << "Thanks!" << endl;
    return 0;
}
