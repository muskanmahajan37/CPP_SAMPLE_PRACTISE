#include <iostream>

enum Status
{
  SINGLE=2,
  MARRIED=1,
  MINGLE=0

};

int details(Status data){
  if(data = SINGLE){
    std::cout<<"he is single"<<std::endl;
  }
  else if(data = MARRIED){
    std::cout<<"he is married"<<std::endl;
  }
  else if(data = MINGLE){
    std::cout<<"he is ready to mingle "<<std::endl;
  }
  else{
    std::cout<<"no a valid option"<<std::endl;
  }
  return 0;
}


 int main(int argc, const char** argv) {

   details(SINGLE);
    return 0;
}