// copyright (c) 2021 Chanella All rights reserved
// created by:Chanella
// Date:April 12 2025
// This program asks the user for a whole number
// It then calculates the factorial of that number
#include <iostream>

int main() {
    // initializes
    int counter = 0;
    int factorialAnswer = 1;
    int userNum;

    // get the user number
    std::cout << "Enter a whole number:";
    std::cin >> userNum;
    std::cout << std::endl;

    // calculates the factorial of the number
    do {
        counter++;
        factorialAnswer = factorialAnswer * counter;
        std::cout << "Tracking" << counter << "Times through the loop .\n";
    } while (counter < userNum);

    // display the answer to the user
    std::cout << userNum << "! = " << factorialAnswer << std::endl;
}
