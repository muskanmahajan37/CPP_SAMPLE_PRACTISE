#include<iostream>

int main(int argc, char const *argv[])
{
  std::cout <<"this is the programme for number of arguments"<<std::endl;
  if (argc != 1)
  {
    std::cout<<"some of the arguments have been passed"<<std::endl;
    std::cout << "number of arguments passed are :" << argc << std::endl;

    for (int i = 0; i < argc; i++)
    {
      std::cout << argv[i] << std::endl;
    }
  }
  return 0;
}