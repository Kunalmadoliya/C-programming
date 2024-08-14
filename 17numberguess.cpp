#include <iostream>
#include <ctime>

int main() {
    int number;    // Variable to store the user's guess
    int tries = 0; // Counter for the number of attempts

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randNum = (rand() % 100) + 1;

    do {
        // Prompt the user to guess a number
        std::cout << "Guess any number between 1 and 100: ";
        std::cin >> number;
        tries++; // Increment the attempt counter

        // Provide feedback based on the guess
        if (number < randNum) {
            std::cout << "Too low!\n";
        } else if (number > randNum) {
            std::cout << "Too high!\n";
        } else {
            std::cout << "You won! It took you " << tries << " tries.\n";
        }
    } while (number != randNum); // Repeat until the correct number is guessed

    return 0;
}
