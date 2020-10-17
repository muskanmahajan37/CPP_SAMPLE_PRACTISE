#include <iostream>
#include <cstdint>
struct temp
{
  int var1 ;
  int var2;
};
int main(int argc, char const *argv[])
{

  int* a = new int; // gets memory from heap

  struct temp* str_1 = new struct temp; // structre to get memory from heap
  std::cout <<"memoery from heap " << str_1 << std::endl;
  std::cout << "memoru from heap to the integer is : "<< a <<std::endl; 

  delete(str_1); // should delete memory from heap
  delete(a);
  return 0;
}
