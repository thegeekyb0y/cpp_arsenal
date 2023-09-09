#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a binary number and we will change it to decimal: ";
  cin >> n;
  int lastdigit;
  int power=1;
  int decimal = 0;
  while (n>0) {
    lastdigit = n%10;
    decimal = decimal + (lastdigit * power);
    power = power*2;
    n=n/10;
  }
  cout << decimal;
}
