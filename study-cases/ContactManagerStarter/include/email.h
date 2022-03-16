#include <string>
using namespace std;

#ifndef EMAIL_H
#define EMAIL_H


class email
{
    public:
        email(string,string,string);
        ~email();
        //add get and set and other function
        void print() const;
    private:
        string m_email;
        string m_type;
        string m_description;
};

#endif // EMAIL_H
