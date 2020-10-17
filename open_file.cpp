// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  ifstream myfile ("C:\\Users\\ag16000\\Desktop\\birthdays.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      int last_date = line.length();
      int first_date = line.length()-4;
      int  first_name=
      cout << first  <<","<< last << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}