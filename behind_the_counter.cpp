#include <iostream>
#include <cstdlib>
#include <string>
double balance = 0;

void deposit() {
    int deposit;
    std::cout << "\nHow much would you like to deposit? ";
    std::cin >> deposit;
    balance += deposit;
    std::cout << "\n$" << deposit << " has been deposited to your account.";
}

void withdraw() {
    int withdrawal;
    std::cout << "\nHow much would you like to withdraw? ";
    std::cin >> withdrawal;
    if(balance - withdrawal < 0) {
        std::cout << "\nSorry but you don't have enough in your account to withdraw $" << withdrawal << ".";
        return;
    }
    balance -= withdrawal;
    std::cout << "\n$" << withdrawal << " has been withdrawn to your account.";
}

void check() {
    std::cout << "\nYour current balance is " << balance << ".";
}