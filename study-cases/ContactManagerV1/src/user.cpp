#include "user.h"

user::user()
{
    m_phone_size = 5;
    m_address_size =5;
    m_email_size=5;

    m_phones = new phone[m_phone_size];
    m_address = new address[m_address_size];
    m_emails = new email[m_email_size];

    m_phone_count = 0;
    m_address_count = 0;
    m_email_count = 0;

    m_added = time(0);

    m_gender = 0;
    m_age = 0;
}

user::~user()
{
    delete [] m_phones;
    delete [] m_address;
    delete [] m_emails;
}

void user::print() const{
    cout << "-----------------------------------------------\n";
    cout << "ID: " << m_id << "\tNAME: " << m_fname << " " << m_lname << "\t";
    if(m_age>0)
        cout << "AGE: "<< m_age << "\t";
    cout << (m_gender==0?"MALE":"FEMALE");
    cout << endl;

    if(m_phone_count>0){
        cout<<"\tPHONE LIST:\n";
        for(int i=0;i<m_phone_count;++i){
            cout << "\t" <<i+1 << " - " ;
            m_phones[i].print();
        }
    }

    if(m_email_count>0){
        cout<<"\tEMAIL LIST:\n";
        for(int i=0;i<m_email_count;++i){
            cout << "\t" <<i+1 << " - " ;
            m_emails[i].print();
        }
    }

    if(m_address_count>0){
        cout<<"\tADDRESSES LIST:\n";
        for(int i=0;i<m_address_count;++i){
            cout << "\t" <<i+1 << " - " ;
            m_address[i].print();
        }
    }
    cout << endl;
}
void user::readInput(){
    cout<< "Enter User Information:-\n";
    cout<<"First Name: ";
    cin.ignore();
    getline(cin , m_fname);

    cout<<"Last Name: ";
    cin.ignore();
    getline(cin, m_lname);

    cout << "Age: ";
    cin >> m_age;

    cout << "Gender (0-Male, 1-Female):";
    cin >> m_gender;

    int n=0;
    cout<< "How many phones (0-"<< m_phone_size <<")?";
    cin >> n;
    cin.ignore();

    for(int i=0; i<n;++i){
        cout<< "----------------------"<<endl;
        string data,type,desc;
        cout<< "PONE NUMBER (" << i+1 << ") : ";
        getline(cin, data);

        cout <<"Type :";
        getline(cin, type);

        cout<<"Description :";
        getline(cin, desc);

        //create new phone object
        phone * new_phone = new phone(data,type,desc);
        //store to phone array
        m_phones[m_phone_count++]= *new_phone;
    }

    n=0;
    cout<< "How many Emails (0-"<< m_email_size <<")?";
    cin >> n;
    cin.ignore();

    for(int i=0; i<n;++i){
        cout<< "----------------------"<<endl;
        string data,type,desc;
        cout<< "EMAIL (" << i+1 << ") : ";
        getline(cin, data);

        cout <<"Type :";
        getline(cin, type);

        cout<<"Description :";
        getline(cin, desc);

        //create new  object
        email * new_email = new email(data,type,desc);
        //store to  array
        m_emails[m_email_count++]= *new_email;
    }

    n=0;
    cout<< "How many Addresses (0-"<< m_address_size <<")?";
    cin >> n;
    cin.ignore();

    for(int i=0; i<n;++i){
        cout<< "----------------------"<<endl;
        string data,type,desc;
        cout<< "ADDRESS (" << i+1 << ") : ";
        getline(cin, data);

        cout <<"Type :";
        getline(cin, type);

        cout<<"Description :";
        getline(cin, desc);

        //create new  object
        address * new_address = new address(data,type,desc);
        //store to  array
        m_address[m_address_count++]= *new_address;
    }

}

void user::setUserId(int id){
    m_id = id;
}
void user::setFirstName(string firstname){
    m_fname = firstname;
}
void user::setLastName(string lastname){
    m_lname = lastname;
}
void user::setAge(int age){
    m_age = age;

}
void user::setGender(int gender){
    m_gender = gender;
}

int user::getUserId()const{
    return m_id;
}
bool user::findAny(string key) const{
    if(m_fname.compare(key)==0 || m_lname.compare(key)==0){
        return true;
    }
    if(m_phone_count>0){
        //search in phones
        for(int i=0;i<m_phone_count;++i){
            if(m_phones[i].isMatched(key))
                return true;
        }
    }
    if(m_email_count>0){
        //search in emails
        for(int i=0;i<m_email_count;++i){
            if(m_emails[i].isMatched(key))
                return true;
        }
    }

    if(m_address_count>0){
        //search in address
        for(int i=0;i<m_address_count;++i){
            if(m_address[i].isMatched(key))
                return true;
        }
    }

    return false;
}
