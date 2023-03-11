#include <string.h>
#include "user.h"

#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED

class contact{
private:
    int m_max_users;
    int m_number_of_users;
    user *m_users;
public:
    contact(int max_users=10){
        m_max_users = max_users;
        m_number_of_users = 0;
        m_users = new user[m_max_users];
    }
    ~contact(){
        delete [] m_users;
    }
};

#endif // CONTACT_H_INCLUDED
