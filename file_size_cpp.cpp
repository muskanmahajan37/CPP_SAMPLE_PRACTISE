#include <iostream>
#include <fstream>
#include <string>
int main(int argc, char const *argv[])
{
std::streampos a,b;
std::ifstream file("new.txt",std::ios::binary);
if(file.is_open()){
  a=file.tellg();
  file.seekg(0,std::ios::end);
  b=file.tellg();
  std::cout<<"the size of file : "<<(b-a)<<" bytes "<<std::endl;
}
else{
  std::cout<<"error opening the file"<<std::endl;
  return 1;
}
return 0;
}
