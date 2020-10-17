#include <iostream>
#include <fstream>
#include <string>
int main(int argc, char const *argv[])
{
  std::ifstream file("new.txt");
  std::string msg;
  if(file.is_open()){
     while(getline(file,msg)){
       std::cout<<msg<<std::endl;
     }
  }
  else{
    std::cout <<"error opening file"<<std::endl;
    return 1;
  }
  file.close();
return 0;
}
