#include <iostream>

struct details
{
  std::string name;
  float age;
  int id;
};

struct surname
{
  struct details surname;
};

int main(int argc, char const *argv[])
{
  struct details student1;
  struct surname surname1;

  student1.name= "rohan";
  student1.age=12;
  student1.id= 4;
  surname1.surname = student1;

  std::cout <<"the surname of student is : " surname1.surname.name<<std::endl;

  
  std::cout << "student one details: "<< student1.name <<std::endl;
  std::cout << "student one details: "<< student1.age <<std::endl;

  return 0;
}

