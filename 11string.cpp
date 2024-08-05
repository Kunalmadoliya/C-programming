#include <iostream>


int main(){


    std::string name;


    std::cout << "enter your name :";
    std::cin >> name ;


    if(name.length() < 7){

        std::cout << "your name is " << name;
    }else{
        std::cout << "too long try again";
    }


return 0;
}