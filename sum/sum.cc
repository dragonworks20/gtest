// #include "sum.h"
// #include <iostream>
// using namespace std;
// const int Test::mCount = 5;
// void Test::Print(){
//     cout<<mCount<<endl;
// }
// bool CheckSameInt(int a, int b){
//     return a==b;
// }
// int sum(int a, int b)
// {
//     Test t;
//     t.Print();
//     //cout<<mCount<<endl;
//     return a+b;
// }

// testing::AssertionResult IsEven(int n) {
//   if ((n % 2) == 0)
//     return testing::AssertionSuccess();
//   else
//     return testing::AssertionFailure() << n << " is odd";
// }

#include "sum.h"

Sum::Sum(){

}
Sum::~Sum(){

}

int Sum::Add() {
  return 3;
}

int Sum::PositiveNumbers(int a, int b) {
  if (a > 0 && b > 0) {
    return a + b;
  } else {
    return 0;
  }
}
int Sum::NegativeNumbers(int a, int b) {
  if (a < 0 && b < 0) {
    return a + b;
  } else {
    return 0;
  }
}
int Sum::Zero(int a, int b) {
  if (a == 0 || b == 0) {
    return a + b;
  } else {
    return 0;
  }
}
