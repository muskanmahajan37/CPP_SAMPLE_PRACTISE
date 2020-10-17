#include<iostream>

int main() {
std::cout<<"enter the number: ";
std::cin>>num;
switch (num)
{
case 10:
  std::cout<<"the number is 10";
  break;
case 20:
  std::cout<<"the number is 20";
  break;
case 30:
  std::cout<<"the number is 30";
  break;


default:
std::cout<<"enter a valid number";
  break;
}

}