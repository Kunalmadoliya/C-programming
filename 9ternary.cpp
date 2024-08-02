#include <iostream>


int main(){

    int age;

    std::cout << "what is your age :";
    std::cin >> age ;

    age < 18 ? std::cout<< "you can't drive" : std::cout<< "you can drive";


    return 0;
}