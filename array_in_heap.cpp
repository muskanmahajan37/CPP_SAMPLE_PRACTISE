#include <iostream>

int main(int argc, char const *argv[])
{
    int* a = int[10];


    for (int i = 0; i <=9; i++)
    {
      a[i] = i;
    }
s
    for (int i = 0; i <=9; i++)
    {
      std::cout<< a[i] <<std::endl;
    }
delete [] a;
  return 0;
}
