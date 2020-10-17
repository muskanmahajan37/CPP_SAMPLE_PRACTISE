#include<iostream>

#ifndef MACRO
    #define yo 1
#endif /* macroname */


#define AREA(a,b) (a*b)
#define LIMIT 5
using namespace std;

int main(){
    int i=1;
    int j=1;
    int A,k;
    A=AREA(i,j);
    cout << "area of the rectangle is :" << A;
    std::cout << std::endl;
    cout << "+++++++++++++" << endl;
    for ( k = 0; k < LIMIT; k++)
    {
        cout << k << endl;
    }
    cout << "+++++++++++++" << endl;
    std::cout << yo; // gfg = 50
    cout << "+++++++++++++" ;
    cout
    return 0;
}


