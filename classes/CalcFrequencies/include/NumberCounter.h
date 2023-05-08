#ifndef NUMBERCOUNTER_H
#define NUMBERCOUNTER_H

class NumberCounter {
public:
    NumberCounter(){}
    NumberCounter(int n) : number(n), count(1) {}
    void increment() { count++; }
    double getNumber() const { return number; }
    int getCount() const { return count; }
private:
    int number;
    int count;
};


#endif // NUMBERCOUNTER_H
