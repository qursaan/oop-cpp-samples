#include <string>
using namespace std;

#include "phone.h"
#include "email.h"
#include "address.h"

#ifndef USER_H
#define USER_H


class user
{
    public:
        user();
        ~user();
        //add get and set and other function
        void print() const;
        void readInput();
        bool findAny(string key);

    private:
        string m_fname;
        string m_lname;
        //... add other variables

        phone   * m_phones;  //Composition class
        address * m_address; //Composition class
        email   * m_emails;  //Composition class
};

#endif // USER_H
