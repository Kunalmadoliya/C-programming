#include <iostream>

std::string toppings(std::string topping1 );
 std::string toppings(std::string topping1 , std::string topping2);
 

int main(){
  
  toppings("cheese" , " prpronie");


  return 0;
}

std::string toppings(std::string topping1 ){

    std::cout << "your toppings are :" << topping1 ;
}
std::string toppings(std::string topping1 , std::string topping2){

    std::cout << "your toppings are :" << topping1 << "and" << topping2 ;
}