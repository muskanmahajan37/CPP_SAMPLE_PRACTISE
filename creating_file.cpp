#include <iostream>
#include <fstream>
using namespace std;
main () {
ofstream file_old,file_new;
file_old.open ("filename.txt");
file_old << "Writing this to a file.\n";
file_old << "my name is rohan" ;
file_new.open("rohan.txt");
file_new << "my name is rohan";
file_old.close();
file_new.close();
return 0;
}