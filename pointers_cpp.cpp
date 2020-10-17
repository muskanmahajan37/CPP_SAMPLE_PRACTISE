#include <iostream>
#include <cstdint>
 struct temp
 {
   int vec_1;
   int vec_2;
 };
int main(int argc, char const *argv[])
{
  // int a=10;
  // std::cout <<"value of integer a before changing : "<< a << std::endl;
  // int* ptr = &a;
  // std::cout<<"memory address of the integer a : "<< ptr << std::endl;
  // *ptr = 300;

  // std::cout <<"value of the integer after the value of a is changed: "<< *ptr << std::endl;

// int** ptr2 = &ptr;

// std::cout <<"the value of the pointers address is : "<<*ptr2<<std::endl;

struct temp struct_1;
struct_1.vec_1 =10;
struct_1.vec_2=20;


std::cout <<"the value of the structures before changing " << std::endl;
std::cout << "value is : "<< struct_1.vec_1 <<std::endl;
std::cout << "value is : "<< struct_1.vec_2 <<std::endl;


std::cout <<"the value of the structures after changing " << std::endl;

struct temp* struct_2=&struct_1;

struct_2->vec_1 = 100;
struct_2->vec_2 = 200;



std::cout << "value is : "<< struct_1.vec_1 <<std::endl;
std::cout << "value is : "<< struct_1.vec_2 <<std::endl;

//null pointer segmentation fault trying to access ristricted memory 
  // int* ptr1 = NULL;
  // std::cout<<"the value of the null pointer is : "<< *ptr1 <<std::endl;
  // *ptr1 = 78;


//accessing the values of the pointer using address
// uintptr_t p = 0x61feb0;
// int value = *reinterpret_cast<int *>(p);
// std::std::cout << value <<std::endl;

   return 0;
}
