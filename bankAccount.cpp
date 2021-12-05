#include "bankAccount.h"
//definition of member functions and constructor

void bankAccount::setAccountNumber(int acct){
    accountNumber=acct;
}
int bankAccount::getAccountNumber()const{
    return accountNumber;
}

void bankAccount::setAccountBalance(double bal){
    balance=bal;
}
double bankAccount::getBalance()const{
    return balance;
}

void bankAccount::withdraw(double amount){
    cout<<"withdraw Amount is "<<amount<<"\n ";
    balance-=amount;
    cout<<"New Balance: "<<balance<<endl;
}
void bankAccount::deposit(double amount){
    balance+=amount;
}
void bankAccount::print(){

    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Account balance: "<<balance<<endl;

}
bankAccount::bankAccount(int acctNumber, double bal){    //constructor
    accountNumber=acctNumber;
    balance=bal;
}
