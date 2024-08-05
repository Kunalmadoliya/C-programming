#include <iostream>

// The while loop keeps running until the user enters a non-empty name

int main(){

    std::string name;

    while(name.empty()){

        std::cout << "enter your name :";
        std::getline(std::cin , name);
    }

    std::cout << "your name is " << name;

    return 0;
}
