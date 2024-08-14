#include <iostream>

/*
A function is a block of code that performs a specific task. 
You can call (use) the function whenever you need to perform that task, 
which helps to organize and reuse code.
*/


// Function declaration
void birthday(std::string name, int age);

int main() {
    int age;
    std::string name;

    // Prompt the user for their name
    std::cout << "What is your name: ";
    std::cin >> name;

    // Prompt the user for their age
    std::cout << "What is your age: ";
    std::cin >> age;

    // Call the birthday function
    birthday(name, age);

    return 0;
}

// Function definition
void birthday(std::string name, int age) {
    std::cout << "Happy birthday to " << name << "!\n";
    std::cout << "You are now " << age << " years old.\n";
}
