#include <iostream>
#include <cmath>
#include <vector>



int main(){

double perpendicular;
double base;


std::cout << "Enter perpendicular :";
std::cin >> perpendicular;

std::cout <<  "enter base :";
std::cin >> base ;

double hypotenus = sqrt(pow(perpendicular,2) + pow(base,2));


std::cout << "your hypotenous is :" << hypotenus;


return 0;

}