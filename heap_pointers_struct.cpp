#include<iostream>

struct demo
{
  int i;
  int j;
};

void func(struct demo* temp){

  temp->i=200;
  temp->j=300;
}

int main(int argc, char const *argv[])
{

  struct demo* struct_1 = new struct demo;
  struct_1->i = 20;
  struct_1->j = 30;
  std::cout << "value of heap structures before the function : "<< struct_1->i  << std::endl;
  std::cout << "value of heap structures before the function : "<< struct_1->j  << std::endl;

  func(struct_1);
  std::cout << "value of heap structures after the function : "<< struct_1->i  << std::endl;
  std::cout << "value of heap structures after the function : "<< struct_1->j  << std::endl;
  return 0;
}
