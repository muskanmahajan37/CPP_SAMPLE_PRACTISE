// #include<iostream>//include is a preprocessor directive and the header file iostream in the programme

// using namespace std; // using name space standard meaning using standard library like cout cin

// //first two line mean using the standard class or function (std) inside the iostream file i.e header file

// void printing(){
//     cout << "\nfunction without parameters" << endl;

// }

// int addition(int x,int y){
//     cout << "\nfunction with parameters with return :\n";
//     int sum_0 = x + y;
//     return sum_0;
// }

// void addition_1(int c,int d){
//     cout << "\n function with parameters and no return values: \n";
//     int sum_1 = c + d;
//     cout << sum_1;
// }

// int main()
// {
//     int a;
//     int b;
//     cout << "hello world" << endl;
//     cout << "enter  number 1 : ";
//     cin >> a;
//     cout << "enter number 2 : ";
//     cin >> b;
//     int sum = a + b ;
//     cout << "sum is : "<< endl;
//     cout << sum;
//     cout << "------------------------";
//     printing();
//     cout << "------------------------";
//     cout << addition(12,13) << endl;
//     cout << "------------------------";
//     addition_1(12,13);
//     cout << "hello world" << endl;
//     cout << "\npress enter to quit";

//     cin.clear();
//     cin.ignore();
//     cin.get();

//     return 0;
// }


//standard input output functions usage
/*
#include<iostream>

 int main() {

     int sum =2;
     std::cout << sum;

    std::cout<<"hello world" << std::endl;
    std::cin.clear();
    std::cin.get();
    std::cin.ignore();
    return 0;
}*/

//local and global variables 


//data types 1.built in data types
//2.derieved (array , function ,pointers)
//3.user defined datatyoes (struct, enum ,union)


//global variables usage 
// #include<iostream>
// using namespace std;
/*
int glo=6;
int main(){

    cout<<"hello world"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }
    int a=10;
    int b=12;
    int glo=9;
    cout << "the value of the first element is "<< a <<" \nand the value of the second element is "<< b << endl;
    cout << "\nvalue of global variable is " << glo;
    return 0;
}*/

//  #include<iostream>
// //  #include "rohan.h"

//  using namespace std;

//cin function usage 
// // int main(){

// //     int num1;
// //     cout << "enter the number: \n";
// //     cin >> num1;
// //     cout << "the entered number is : "<<num1;
// //     return 0;
// // }


//writing sorting algorithms
// void sorting(int A[],int n){
//     int k,j;
//     for (int i = 0; i < n-1; i++){
//         int mini=i;
//         for (int j = i+1; j < n; j++){
//             if(A[j] < A[mini]){
//                 mini = j;
//                 }
//             }
//             int temp=A[i];
//             A[i]=A[mini];
//             A[mini]=temp;
//         }

// }
// int main(){
//     int C[]={2,5,1,10,8,9};
//     int k;
//    cout<<"array before sorting : ";
//     for ( int k = 0; k < 6; k++)
//     {
//         cout<<C[k]<<" ";
//     }
//     cout <<"\narray after sorting : ";
//     sorting(C,6);
//     for (int l = 0; l < 6; l++)
//     {
//         cout<<C[l]<<" ";
//     }
//     return 0;

// }

// #include<iostream> 
// using namespace std; 
// void selectionSort(int a[], int n) {
//    int i, j, min, temp;
//    for (i = 0; i < n - 1; i++) {
//       min = i;
//       for (j = i + 1; j < n; j++)
//          if (a[j] < a[min])
//             min = j;
//       temp = a[i];
//       a[i] = a[min];
//       a[min] = temp;
//    }
// }
// int main() {
//    int a[] = { 22, 91, 35, 78, 10, 8, 75, 99, 1, 67 };
//    int n = sizeof(a)/ sizeof(a[0]);
//    int i;
//    cout<<"Given array is:"<<endl;
//    for (i = 0; i < n; i++)
//    cout<< a[i] <<" ";
//    cout<<endl;
//    selectionSort(a, n);
//    printf("\nSorted array is: \n");
//    for (i = 0; i < n; i++)
//    cout<< a[i] <<" ";
//    return 0;
// }


//operators

// int  main() {
//     //arithemetic operators
//     int a = 5,b=4;
//     cout<<"addition of two numbers: "<<a+b<<endl;
//     cout<<"subtraction of two numbers: "<<a-b<<endl;
//     cout<<"division of two numbers: "<<a/b<<endl;
//     cout<<"multiplication of two numbers: "<<a*b<<endl;
//     cout<<"modular of two numbers: "<<a%b<<endl;
//     //assignment operators
//     int c=1,d=2;
//     //comparassion operators
//     cout<<"equal"<<(a==b)<<endl;
//     cout<<"unequal"<<(a!=b)<<endl;
//     cout<<"greater and equal"<<(a<=b)<<endl;
//     cout<<"lessthan and equal"<<(a>=b)<<endl;
//     cout<<"increement operator"<<(++a)<<endl;
//     cout<<"decrement operatior"<<(--a)<<endl;
//     return 0;
// }


//use of global variables
//    #include <iostream>
//    using namespace std;
//    int x = 5;
//    int main()
//    {
//        int x = 1;
//        cout <<"the local variable x : "<< x <<endl;
//        cout << "The variable x: " << ::x << endl;
//    }   


//uing sizeof()
// #include<iostream>
// using namespace std;
//  int main() {
    //  cout<<"the value of 34.3f"<<sizeof(34.3f);
    //  cout<<"the value of 34.3F"<<sizeof(34.3F);
    // cout<<"the value of 34.3l"<<sizeof(34.3l);
    // cout<<"the value of 34.3L"<<sizeof(34.3L);
    // cout<<"the value of 34.3f"<<sizeof(34.3);
    // return 0;
//reference variables

// int x = 10;
// int & y = x;

// cout <<"the value of x is : "<<x;
// cout <<"the value of y  is : " << y;


//type casting

// float a =45.6;

// cout << "the value of a before type casting: "<<a<<endl;
// cout <<"the value of a after type casting: "<<int(a)<<endl;
// cout <<"the value of a after type casting: "<<(int)a<<endl;
// return 0;
// }

#include<iostream>
using namespace std;
int main(int argc, const char** argv) {
    // test();

    cout<<"hello";
    return 0;
}

