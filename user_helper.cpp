#include "behind_the_counter.cpp"

string getUserAction() {
    string userAction;
    while (true) {
        std::cout << "\nWelcome to the best C++ Bank! Would you like to deposit, withdraw, or check your account? ";
        std::cin >> userAction;
        if(userAction != "deposit" && userAction != "withdraw" && userAction != "check") {
            std::cout << "\nSorry, but that's not a valid option. Please choose either deposit, withdraw, or check!\n";
            continue;
        }
        return userAction;
    }
}

int main() {
    string userAction{ getUserAction() };
    /*while (true) {
        break;
    }*/
    std::cout << userAction;
    return EXIT_SUCCESS;
}