/**
 * @file main.cpp
 * @author Patrick Warren
 * @date 2022-08-31
 * @brief Print sum of numbers from 1 to n
 * 
 * Prints out the sum of numbers between 1 and the user supplied number
 */


#include <iostream>

using namespace std;

int sum(int number);

int main() {
  int n = 0;
  cout << "Please enter a number: ";
  cin >> n;
 int total = sum(n);
 cout << "The sum of the numbers from 1 to your number is: " << total << endl;
  return 0;
}

int sum (int number) {
  int tot = 0;
  
  for (int i = 0; i <=  number; i++){
    
  tot = tot + i;
 }
return tot;
}

