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

}

void check() {
    
}