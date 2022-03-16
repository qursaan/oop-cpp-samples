#include <ctime>
#include <string>
#include <iostream>

#include "phone.h"
#include "email.h"
#include "address.h"

using namespace std;
#ifndef USER_H
#define USER_H


class user
{
    public:
        user();
        virtual ~user();

        void print() const;
        void readInput();

        void setUserId(int);
        void setFirstName(string);
        void setLastName(string);
        void setAge(int);
        void setGender(int);

        int getUserId()const;
        bool findAny(string) const;

    protected:

    private:
        int m_id;
        string m_fname;
        string m_lname;
        int m_age;
        int m_gender; //0-male 1-female;

        time_t m_added;

        phone * m_phones; //composition class
        address * m_address;
        email * m_emails;

        int m_phone_size;
        int m_address_size;
        int m_email_size;

        int m_phone_count;
        int m_address_count;
        int m_email_count;

};

#endif // USER_H
