/*
Author: Wei Da Chen
Course: CSCI 135 REC
Instructor: Mike Zamansky
Assignment: Task A

Write a program smaller.cpp that asks the user to input two integer numbers
and prints out the smaller of the two.
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

   cout << "\n\n";

   int smallerNum;
   if (num1 < num2 && num2 > num1) {
      smallerNum = num1;
   }
   else if (num1 > num2 && num2 < num1) {
      smallerNum = num2;
   }
   else {
      cout << "Invalid Number(s)";
   }

   cout << "The smaller of the two is: " << smallerNum;
   return 0;
}
