# Output goes below

xxxxx
x   x
x   x
xxxxx

---------------------------------------------------------------------------------
# Code :

#include <iostream>
using namespace std;
int main() {
  int row,col;
  cin >> row;
  cin>>col;
  for (int i=1; i <=row; i++) {
    for (int j=1; j <= col; j++) {
      if (i==1 || j==1 || i==row|| j==col) {
        cout << "x";
      }
      else {
        cout << " ";
      }
    }
  cout << endl;
  }
}




