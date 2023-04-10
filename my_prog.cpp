#include <iostream>
using namespace std;

int main() {
  int num1 = 15;
  int num2 = 25;
  
  // Check if num1 is even or odd
  if (num1 % 2 == 0) {
    cout << num1 << " is even" << endl;
  } else {
    cout << num1 << " is odd" << endl;
  }
  
  // Check if num2 is even or odd
  if (num2 % 2 == 0) {
    cout << num2 << " is even" << endl;
  } else {
    cout << num2 << " is odd" << endl;
  }
  
  // Swap num1 and num2 without using a third variable
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;
  
  cout << "After swapping, num1 = " << num1 << " and num2 = " << num2 << endl;
  
  return 0;
}
