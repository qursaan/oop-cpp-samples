#include "BankAccount.h"

BankAccount::BankAccount(double initialBalance)
{
    this->balance = initialBalance;
}

double BankAccount::withdraw(double amount){
    if(balance-amount >0)
        return balance-=amount;
    else
        return -1;
}
