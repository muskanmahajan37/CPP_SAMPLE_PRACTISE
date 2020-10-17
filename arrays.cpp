#include <iostream>

int main(int argc, char const *argv[])
{
  int count;
  std::cout<<"enter the range of elements you want to print or type: "<<std::endl;
  std::cin >> count;
  int arr[count];
std::cout<<"-----------------------------------"<<std::endl;
  for (int i = 0; i <= count-1; i++)
  {
    std::cout<<"enter the element values: "<<std::endl;
    std::cin>>arr[i];
  }
std::cout<<"-----------------------------------"<<std::endl;
  for (int j = 0; j <= count-1; j++)
  {
    std::cout<<"the elements of the array typed by you are:  " << arr[j]<<std::endl;
  }
  

  return 0;
}
