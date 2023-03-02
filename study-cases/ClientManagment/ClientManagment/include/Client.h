#include <iostream>
#include <string.h>
#include "Time.h"
using namespace std;

#ifndef CLIENT_H
#define CLIENT_H


class Client
{
    public:
        Client(){
        }
        // Get client duration time
        Time GetDuration(){
            return Time::Diff(m_exitTime, m_entryTime);
        }
        // Set client time
        void SetEntryTime(int hour, int minute, int second){
            m_entryTime.SetTime(hour, minute, second);
        }
        void SetExitTime(int hour, int minute, int second){
            m_exitTime.SetTime(hour, minute, second);
        }

    private:
        int m_id;           // Client ID
        string m_name;      // Client name
        int m_service;      // Service ID
        Time m_entryTime;   // Entry time
        Time m_exitTime;    // Exit time
};

#endif // CLIENT_H
