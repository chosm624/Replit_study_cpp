#include <iostream>
#include"../Header/Test.h"

using std::cout;
using std::endl;

void Test1::Helloworld()
{
  cout<<"Hello World"<<endl;
}
int Test1::Sum(int num1, int num2)
{
  return num1 + num2;
}

void Test2::Helloworld()
{
  cout<<"Hello"<<" "<<"World"<<endl;
}
int Test2::Sum(int num1, int num2)
{
  return num1+num2;
}