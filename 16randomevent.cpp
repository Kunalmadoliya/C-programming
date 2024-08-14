#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    srand(time(0));

    int randNum = rand() % 5  ;

    std::cout << randNum ;
  
  switch (randNum)
  {
  case 1: std::cout << "your number is 1" << '\n';
    break;
  case 2: std::cout << "your number is 2";
    break;
  case 3: std::cout << "your number is 3";
    break;
  case 4: std::cout << "your number is 4";
    break;
  case 5: std::cout << "your number is 5";
    break;
  case 6: std::cout << "your number is 6";
    break;
  
  default: std::cout <<"you lose";
    break;
  }




return 0;
}