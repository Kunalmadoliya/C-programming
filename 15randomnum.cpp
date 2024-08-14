#include <iostream>
#include <cstdlib> // Needed for srand() and rand()
#include <ctime>   // Needed for time()

int main(){

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 0 and 5
    int num1 = rand() % 6;
    int num2 = rand() % 6;
    int num3 = rand() % 6;

    // Output the random number
    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}
