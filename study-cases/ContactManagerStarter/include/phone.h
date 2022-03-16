#include <string>
using namespace std;
#ifndef PHONE_H
#define PHONE_H


class phone
{
    public:
        phone(string,string,string);
        ~phone();
        //add get and set and other function
        void print() const;
    private:
        string m_phone;
        string m_type;
        string m_description;
};

#endif // PHONE_H
