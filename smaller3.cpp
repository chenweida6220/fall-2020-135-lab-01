/*
Author: Wei Da Chen
Course: CSCI 135 REC
Instructor: Mike Zamansky
Assignment: Task B

Write a program smaller3.cpp that asks the user to input three integer numbers,
and prints out the smallest of the three.

(Hint: There are many possible solutions here. One possible strategy: Given
numbers x, y, and z, you can first compare x and y, take whichever is smaller
and compare it with z.)
*/

#include <iostream>
using namespace std;

int main() {
  int num1;
  cout << "Enter the first number: ";
  cin >> num1;

  int num2;
  cout << "Enter the second number: ";
  cin >> num2;

  int num3;
  cout << "Enter the third number: ";
  cin >> num3;

  cout << endl << endl;

  int smallestNum;

  //Comparing num1 and num2
  if (num1 < num2) {
    smallestNum = num1;
  }
  else if (num2 < num1) {
    smallestNum = num2;
  }
  else {
    cout << "Invalid Number(s)";
  }

  //Comparing smallestNum with num3
  if (smallestNum < num3) {
  }
  else if (num3 < smallestNum) {
    smallestNum = num3;
  }
  else {
    cout << "Invalid Number(s)";
  }

  cout << "The smaller of the three is " << smallestNum;
}
