#include "phone.h"

phone::phone()
{
    //nothing here to initialize
}

phone::phone(string phone_number, string phone_type,string phone_description){
    setPhone(phone_number);
    setType(phone_type);
    setDescription(phone_description);
}
phone::~phone()
{
    //nothing to destroy
}
void phone::setPhone(string phone_number){
    m_phone = phone_number;
}
void phone::setType(string phone_type){
    m_type= phone_type;
}
void phone::setDescription(string phone_description){
    m_description = phone_description;
}

bool phone::isMatched(string key) const{
    return  (m_phone.compare(key)==0);
}

void phone::print()const{
    cout << "Phone: " << m_phone << "\t | " << m_type <<
    "\t | " << m_description << endl;
}
