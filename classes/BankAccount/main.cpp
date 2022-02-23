#include <iostream>
#include "BankAccount.h"

using namespace std;

int main()
{
    BankAccount ba1(100.55);
    cout << ba1.withdraw(10.5);

    return 0;
}
