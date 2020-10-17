#include<iostream>
using namespace std;

int main(){

  char grade;
  cout <<"enter your grade:" << endl;
  cin >> grade;
  switch(grade){
      case  'A':
      cout<<"excellent";
      break;
      case  'B':
      cout<<"good";
      break;
      case  'C':
      cout<<"you passed";
      break;
      case  'D':
      cout<<"you failed";
      break;
      default:
      cout<<"please enter a valid grade"<<endl;
  }
}