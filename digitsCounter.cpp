#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int digits = 0;
  while (n>0) {
    n=n/10;
    digits++;
  }
  cout << "Total digits in your number are " << digits;
}
