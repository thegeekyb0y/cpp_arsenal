#include <iostream>
using namespace std;

int main() {
  int n;
  int count = 1;
  cout << "Enter a number ";
  cin >> n;
  for (int i=1; i<=n ; i++) {
    for (int j = n ; j>=i ; j--) {  
      cout << j; 
      
    }
  cout << endl;  
  }
}
