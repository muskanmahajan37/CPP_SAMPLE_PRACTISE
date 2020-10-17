#include <iostream>
#include <fstream>
#include <string>
int main(int argc, char const *argv[])
{
  std::ofstream file("new.txt");
  
  if(file.is_open()){
     file<<"yo how are you"<<std::endl;
  }
  else{
    std::cout <<"error opening file"<<std::endl;
    return 1;
  }
  file.close();
return 0;
}
