#include <string>
using namespace std;

#ifndef ADDRESS_H
#define ADDRESS_H

class address
{
    public:
        address(string,string,string);
        ~address();
        //add get and set and other function
        void print() const;
    private:
        string m_address;
        string m_type;
        string m_description;
};

#endif // ADDRESS_H
