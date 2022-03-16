#include <string>
#include <iostream>
using namespace std;

#ifndef EMAIL_H
#define EMAIL_H

class email
{
    public:
        email();
        email(string,string,string);
        virtual ~email();

        void setEmail(string);
        void setType(string);
        void setDescription(string);

        bool isMatched(string) const;

        void print() const;
    protected:

    private:
        string m_email;
        string m_type;
        string m_description;
};

#endif // EMAIL_H
