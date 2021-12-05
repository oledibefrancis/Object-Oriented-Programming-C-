#include "checkingAccount.h"
#include "savingsAccount.h"
#include "bankAccount.h"

int main() {

    //objects to test the member functions


    savingsAccount account2(5890987,9.7,8.4);
    account2.postInterest();
    account2.withdraw(8);
    account2.print();



    checkingAccount account3(7689,4.0,8.9);
    account3.postInterest();
    account3.withdraw(7);
    account3.print();



}