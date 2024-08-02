#include <iostream>

int main(){


   char op; 

   double x;
   double y;

   std::cout << "enter your first number :";
   std::cin >> x;


   std::cout << "enter your second number : ";
   std::cin >> y ;

   std::cout << "enter operator :";
   std::cin >> op ;


   switch(op){
     case '+' :
      std::cout << "Answer is :"<< x + y ;
      break;
     case '-' :
      std::cout << "Answer is :"<< x - y ;
      break;
     case '*' :
      std::cout << "Answer is :"<< x * y ;
      break;
     case '/' :
      std::cout << "Answer is :"<< x / y ;
      break;

      default:
      std::cout << "plz enter revelent operator!";

      return 0;
   }
   
}