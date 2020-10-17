#include <iostream>
#include <limits>

int main(int argc, char const *argv[])
{
  std::cout << "limits example " << std::endl;
  std::cout << "min values of int " << std::numeric_limits<int>::min() << std::endl;
  std::cout << "max values of int " << std::numeric_limits<int>::max() << std::endl;
  std::cout << "min values of unsigned int " << std::numeric_limits<unsigned int>::min() << std::endl;
  std::cout << "max values of unsigned int " << std::numeric_limits<unsigned int>::max() << std::endl;

  std::cout << "size of variables "<< std::endl;
  std::cout << "size of int in variable in bytes is : " << sizeof(int)<<std::endl;
  std::cout << "size of char in variable in bytes is : " << sizeof(char)<<std::endl;
  return 0;
}
