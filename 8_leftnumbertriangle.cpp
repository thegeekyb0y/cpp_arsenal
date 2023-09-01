#include <iostream>
using namespace std;

int main() {
  int rows;
  cout << "Enter number of rows: ";
  cin >> rows;

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= (rows-1); j++) {
        cout << " ";
      }
    
    for (int k = 1; k <= (i-1); k++) {
      cout << k;
    }
        
    cout << endl;  // Move to the next line after each row
  }
}
