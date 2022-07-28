#include <iostream>
#include "Header/Test.h"

using std::cout;
using std::cin;
using std::endl;

int InputNum(int *NUM1, int *NUM2)
{
  cout<<"첫번째 숫자 입력: ";
  cin>>*NUM1;
  cout<<"두번째 숫자 입력: ";
  cin>>*NUM2;
  return 0;
}

int main() {

  int num1;
  int num2;

  cout << "Hello World!\n";

  InputNum(&num1, &num2);
  Test1::Helloworld();
  cout<<"T1 result: "<<Test1::Sum(num1, num2)<<endl;

  InputNum(&num1, &num2);
  Test2::Helloworld();
  cout<<"T2 Result: "<<Test2::Sum(num1, num2)<<endl;
  return 0;
}