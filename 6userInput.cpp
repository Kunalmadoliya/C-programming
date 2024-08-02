#include <iostream>

// I/O (Input/Output): Using `std::cin` to take input from the user and `std::cout` to display output.

int main() {
    std::string name;
    int age;

    std::cout << "What is your name?" << "\n";
    std::cin >> name;

    std::cout << "What is your age?" << "\n";
    std::cin >> age;

    std::cout << "Your name is " << name << '\n';
    std::cout << "Your age is " << age;

    return 0;
}
