#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  int lastdigit;
  while (n>0) {
    lastdigit=n%10;
    sum = sum+lastdigit ;
    n = n/10;
  }
  cout << "Sum of digits is " << sum;
}
