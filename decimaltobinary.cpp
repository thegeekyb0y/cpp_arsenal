#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int result = 0;
  int power = 1;
  while (n > 0) {
    int paritydigit = n % 2;
    result += paritydigit * power;
    power = power * 10;
    n = n / 2;
  }
  cout << result;
  return 0;
}
