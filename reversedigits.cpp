#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int reverse = 0;
  int lastdigit;
  while (n>0) {
    lastdigit=n%10;
    reverse = reverse * 10 + lastdigit;
    n = n/10;
  }
  cout << "Reverse of digits is " << reverse;
}
