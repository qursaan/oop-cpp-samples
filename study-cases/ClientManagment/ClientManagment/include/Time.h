#include <iostream>
using namespace std;

#ifndef TIME_H
#define TIME_H

class Time
{
    public:
        Time(){
            m_hour = 0;
            m_minute = 0;
            m_second = 0;
        }
        void PrintTime(){
            cout << m_hour << ":" << m_minute << ":" << m_second << endl;
        }

        void SetTime(int hour, int minute, int second){
            m_hour = hour;
            m_minute = minute;
            m_second = second;
        }

        static Time Diff(const Time &t1, const Time &t2){
            Time t;
            t.m_hour = t1.m_hour - t2.m_hour;
            t.m_minute = t1.m_minute - t2.m_minute;
            t.m_second = t1.m_second - t2.m_second;
            return t;
        }

    private:
        int m_hour;
        int m_minute;
        int m_second;

};

#endif // TIME_H
