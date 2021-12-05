
//Class bankAccount

#ifndef H_bankAccount
#define H_bankAccount

#include <iostream>
using namespace std;


class bankAccount       //base class
{
public:             //public members/functions of the bankAccount class
    void setAccountNumber(int acct);
    int getAccountNumber() const;
    double getBalance() const;
    void setAccountBalance(double);
    void withdraw(double amount);
    void deposit(double amount);
    void print();
    bankAccount(int acctNumber = -1, double bal = 0.0);

protected:              //protected variables of the bankAccount class.
    int accountNumber;
    double balance;
};

#endif
