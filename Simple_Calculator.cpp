

#include <iostream>

using namespace std;

int main() {
  
  float num1, num2;
  char operation;
  cout << "Welcome to the basic calculator!" << endl;
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Choose an operation (+, -, *, /): ";
  cin >> operation;
  cout << "Enter the second number: ";
  cin >> num2;
  switch (operation) {
    case '+':
      cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
      break;
    case '-':
      cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
      break;
    case '*':
      cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
      break;
    case '/':
      if (num2 == 0) {
        cout << "Error: Division by zero!" << endl;
      } else {
        cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
      }
      break;
    default:
      cout << "Invalid operation!" << endl;
  }

  return 0;
}
