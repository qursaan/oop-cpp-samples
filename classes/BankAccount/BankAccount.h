#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H


class BankAccount
{
    public:
        BankAccount(double);
        double withdraw(double);
    private:
        int id;
        double balance;
};

#endif // BANKACCOUNT_H
