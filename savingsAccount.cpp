#include "savingsAccount.h"

double savingsAccount::getInterestRate()const{
    return interestRate;
}

void savingsAccount::setInterestRate(double rate){
    interestRate=rate;
}

void savingsAccount::withdraw(double amount){
    bankAccount::withdraw(amount);
}

void savingsAccount::postInterest(){
    interestRate=getInterestRate();
    double nBalance = bankAccount::getBalance()+ bankAccount::getBalance() * interestRate;
    bankAccount::setAccountBalance(nBalance);
}


void savingsAccount::print(){
    bankAccount::print();
    cout<<"Intrest Rate: "<<interestRate;
    postInterest();
    cout<<endl<<endl;

}

savingsAccount::savingsAccount(int acctNumber, double bal, double intRate):bankAccount(acctNumber,bal){
    interestRate=intRate;
}