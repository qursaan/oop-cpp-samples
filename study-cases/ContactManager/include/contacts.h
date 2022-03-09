#include "user.h"
#include <string>
using namespace std;

#ifndef CONTACTS_H
#define CONTACTS_H


class contacts
{
    public:
        contacts(int);
        ~contacts();
        void addNewUser();
        void delUser();
        void editUser();
        void print() const;
        void findAll(string) const;
    private:
        int m_count;
        int m_size;
        user* m_users; //Composition class
};

#endif // CONTACTS_H
