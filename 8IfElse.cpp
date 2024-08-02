#include <iostream>

int main(){
   
   int age;
    
    std::cout <<"what is your age :";
    std::cin >> age ;



    if(age < 18){

        std::cout << "you cant drive";
    }
    else {

        std::cout <<"you can drive";
    }

   return 0;
}