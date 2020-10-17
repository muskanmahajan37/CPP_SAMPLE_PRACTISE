#include <vector>
#include <iostream>

int main(int argc, char const *argv[])
{
  std::vector<int> vec1;
  vec1.push_back(20);
  vec1.push_back(30);
  vec1.push_back(60);
  vec1.push_back(80);
  vec1.push_back(100);
  int i = vec1.back();
  vec1.pop_back();
  vec1.pop_back();
  std::cout << "last element of the vector list:"<<i<<std::endl;
  std::cout<<"---------"<<std::endl;
  if(vec1.empty()==false){
    for (int i = 0; i < vec1.size(); i++)
    {
      // std::cout<<vec1[i]<<std::endl;  // not the correct 
                                         //   way of accessing the 
                                         //   vector
      std::cout << vec1.at(i) << std::endl;
    }
  }
  return 0;
}
