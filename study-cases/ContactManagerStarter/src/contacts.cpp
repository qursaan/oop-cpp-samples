#include "contacts.h"

contacts::contacts(int contact_size)
{
    m_size = contact_size;
    m_users = new user[m_size];
}

contacts::~contacts()
{
    delete [] m_users;
}

void contacts::addNewUser()
{
    //student to implement
}

void contacts::delUser()
{
    //student to implement
}
void contacts::editUser()
{
    //student to implement
}

void contacts::print()const
{
    //student to implement
}

void contacts::findAll(string key)const
{
    //student to implement
}
