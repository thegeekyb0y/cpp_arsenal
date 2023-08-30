#include <iostream>
using namespace std;

int main() {
  int rows;
  cin >> rows;  // Let's say we input 7
  
  // This loop controls the rows
  for (int i = 1; i <= rows; i++) {
    // This loop prints the increasing sequence
    for (int j = i; j <= rows; j++) {
      cout << j;
    }
    
    // This loop prints the decreasing sequence
    for (int j = 1; j <= (i - 1); j++) {
      cout << j;
    }
    
    cout << endl;  // Move to the next line after each row
  }
}
