#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));

    int computer = rand() % 5 + 1;
    int user;

    std::cout << "=============================\n";
    std::cout << "Rock, Paper, Scissors, Lizard, Spock!\n";
    std::cout << "=============================\n";
    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";
    std::cout << "4) Lizard\n";
    std::cout << "5) Spock\n";
    std::cout << "Enter your choice (1-5): ";
    std::cin >> user;

    if (user < 1 || user > 5) {
        std::cout << "Invalid choice. Please select a number between 1 and 5.\n";
        return 1;
    }

    std::cout << "Computer chooses: ";
    switch(computer) {
        case 1:
            std::cout << "Rock\n";
            break;
        case 2:
            std::cout << "Paper\n";
            break;
        case 3:
            std::cout << "Scissors\n";
            break;
        case 4:
            std::cout << "Lizard\n";
            break;
        case 5:
            std::cout << "Spock\n";
            break;
    }

    std::cout << "You choose: ";
    switch(user) {
        case 1:
            std::cout << "Rock\n";
            break;
        case 2:
            std::cout << "Paper\n";
            break;
        case 3:
            std::cout << "Scissors\n";
            break;
        case 4:
            std::cout << "Lizard\n";
            break;
        case 5:
            std::cout << "Spock\n";
            break;
    }

    if (user == computer) {
        std::cout << "It's a tie!\n";
    } else if ((user == 1 && (computer == 3 || computer == 4)) ||
               (user == 2 && (computer == 1 || computer == 5)) ||
               (user == 3 && (computer == 2 || computer == 4)) ||
               (user == 4 && (computer == 2 || computer == 5)) ||
               (user == 5 && (computer == 1 || computer == 3))) {
        std::cout << "You win!\n";
    } else {
        std::cout << "Computer wins!\n";
    }

    return 0;
}
