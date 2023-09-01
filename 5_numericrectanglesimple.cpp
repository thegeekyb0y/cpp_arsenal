#include <iostream>
using namespace std;

int main() {
  int rows;
  cout << "Enter number of rows: ";
  cin >> rows;

  int col;
  cout << "Enter number of columns: ";
  cin >> col;
  
  // This loop controls the rows
  for (int i = 1; i <= rows; i++) {
    // This loop controls columns
    for (int j = 1; j <= col; j++) {
      cout << j;
    }
        
    cout << endl;  // Move to the next line after each row
  }
}
