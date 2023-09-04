#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i<=4 ; i++) {
    for (int j = 1; j <= 6; j++) {
      if ((i+j) % 2 == 1) {
        cout << "1"; 
      }
      else {
        cout << "2";
      }
    }
  cout << endl;
  }
}

// if i+j is even, it will print 2, if odd, then 1
