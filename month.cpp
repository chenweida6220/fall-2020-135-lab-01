/*
Author: Wei Da Chen
Course: CSCI 135 REC
Instructor: Mike Zamansky
Assignment: Task D

Write a program month.cpp that asks the user to input the year and the month
(1-12) and prints the number of days in that month (taking into account leap
years). You may not use switch case or arrays even if you know these language
constructs.
*/

#include <iostream>
using namespace std;

string leapOrCommonYear(int year) {
    if (year%4 != 0) {
      cout << endl << endl;
      return "Common year";
    }
    else if (year%100 != 0) {
      cout << endl << endl;
      return "Leap year";
    }
    else if (year%400 != 0) {
      cout << endl << endl;
      return "Common year";
    }
    else {
      cout << endl << endl;
      return "Leap year";
    }
}

int main() {
  int year;
  cout << "Enter year: ";
  cin >> year;

  int month;
  cout << "Enter month: ";
  cin >> month;

  int daysInMonth;

  //Leap Year
  if (leapOrCommonYear(year) == "Leap year") {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
      month == 10 || month == 12) {
      daysInMonth = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
      daysInMonth = 30;
    }
    else if (month == 2) {
      daysInMonth = 29;
    }
  }
  // Common Year
    else {
      if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
        month == 10 || month == 12) {
        daysInMonth = 31;
      }
      else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
      }
      else if (month == 2) {
        daysInMonth = 28;
      }
    }

    cout << daysInMonth << " days";
}
