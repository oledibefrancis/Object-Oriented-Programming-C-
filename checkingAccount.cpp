#include "checkingAccount.h"

checkingAccount::checkingAccount(int acctNumber, double bal, double minBal, double intRate,
                                 double servC):bankAccount(acctNumber,bal){
    minimumBalance=minBal;
    interestRate=intRate;
    serviceCharge=servC;
}       //constructor

double checkingAccount::getMinimumBalance()const{
    return minimumBalance;
}

void checkingAccount::setMinimumBalance(double minbalance){
    minimumBalance=minbalance;
}

double checkingAccount::getInterestRate()const{
    return interestRate;
}

void checkingAccount::setInterestRate(double intRate){
    interestRate=intRate;
}

double checkingAccount::getServiceCharge()const{
    return serviceCharge;
}

void checkingAccount::setServiceCharge(double intRate){
    serviceCharge=intRate;
}

void checkingAccount::postInterest(){

    interestRate=getInterestRate();
    double nBalance = bankAccount::getBalance()+ bankAccount::getBalance() * interestRate;
    bankAccount::setAccountBalance(nBalance);

}

bool checkingAccount::verifyMinimumumBalance (double amount) const {
    cout<<"Enter the balance:";
    cin>>amount;
    if (amount<getMinimumBalance()){
        return true;
    }
    else
        return false;
}

void checkingAccount::withdraw(double amt){
    double nBalance;
    if(bankAccount::getBalance()>amt){
        nBalance=bankAccount::getBalance() - amt;
        bankAccount::setAccountBalance(nBalance);
    }
    else
        cout<<"Insufficeinet Balance"<<endl;

}

void checkingAccount::writeCheck(double amount){
    cout<<"Balanace"<<balance;
}

void checkingAccount::print(){
    cout<<endl;
    bankAccount::print();
    cout<<"Intrest Rate: "<<interestRate<<endl;
    cout<<"Service Charge: "<<serviceCharge<<endl;
    cout<<"Minimun Balance: "<<minimumBalance<<endl;
    postInterest();
    cout<<endl<<endl;

}
