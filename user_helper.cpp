#include "behind_the_counter.cpp"
using namespace std;

string getUserAction() {
    string userAction;
    while (true) {
        std::cout << "\nWelcome to best C++ Bank! Would you like to quit, deposit, withdraw, or check your account? ";
        std::cin >> userAction;
        if(userAction != "deposit" && userAction != "withdraw" && userAction != "check" && userAction !="quit") {
            std::cout << "\nSorry, but that's not a valid option. Please choose either quit, deposit, withdraw, or check!\n";
            continue;
        }
        return userAction;
    }
}

int main() {
    while (true) {
        string userAction{ getUserAction() };
        if (userAction == "deposit") deposit();
        else if (userAction == "withdraw") withdraw();
        else if (userAction == "check") check();
        else break;
    }
    std::cout << "\nHope to see you again!";
    return EXIT_SUCCESS;
}