#include <iostream>
#include <string>

using namespace std;

/*
Write a function, reverseDigit, that takes an integer as a parameter and changes
the number with its digits reversed. For example, the value of
reverseDigit(12345) is 54321; the value of reverseDigit(5600) is 65; the value
of reverseDigit(7008) is 8007; and the value of reverseDigit(-532) is -235.
Function does not return a value. It changes the actual parameter.
*/

void reverseDigit(int x);

int main() { 
    reverseDigit(-5760); 
    reverseDigit(289009);
}

void reverseDigit(int num) {

  int reversed = 0;

  bool isNegative = false;

  string x = to_string(num);

  if (x[0] == '-') {
    isNegative = true;
    num *= -1;
  }

  while (num != 0) {
    int digit = num % 10;
    reversed = (reversed * 10) + digit;
    num = num / 10;
  }

  if (isNegative) {
    reversed = reversed * -1;
  }

  num = reversed;
}
