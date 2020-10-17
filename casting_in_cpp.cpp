#include <iostream>

int main(int argc, char const *argv[])
{
  unsigned int  a = 3333333333;
  unsigned char c = (char) a;
  unsigned int  b =(unsigned int) c;
  std::cout << a <<std::endl;
  std::cout << c << std::endl;
  std::cout << b <<std::endl;
  return 0;
}
