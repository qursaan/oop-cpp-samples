#include "user.h"
#include <string>

using namespace std;

#ifndef CONTACTS_H
#define CONTACTS_H


class contacts
{
    public:
        contacts(int);
        virtual ~contacts();

        void addNewUser();
        void detUser(int);
        void editUser(int);
        void print()const;
        void findAll(string)const;

    protected:

    private:
        int m_count;
        int m_size;
        user * m_users; //composition class
};

#endif // CONTACTS_H
