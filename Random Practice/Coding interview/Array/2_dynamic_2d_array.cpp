#include <iostream>
using namespace std;

int main() {
  const int row = 2, col = 2;

  // static array initialization
  int staticArr[row][col] = { {1, 2}, {3, 4}};

  cout << "Static two-dimensional array: ";
  for(int i=0; i<row; i++)
    for(int j=0; j<col; j++)
      cout << staticArr[i][j] << " ";     // printing static array

  cout << endl;

  // dynamic array initialization
  int ** dynamicArr = new int *[row];

  for(int i=0; i<row; i++)
    dynamicArr[i] = new int[col];

  int k=0;
  for(int i=0; i<row; i++)
    for(int j=0; j<col; j++)
      dynamicArr[i][j] = ++k;   // assgining values

  cout << "Dynamic two-dimensional array: ";
  for(int i=0; i<row; i++)
    for(int j=0; j<col; j++)
      cout << dynamicArr[i][j] << " ";

  cout << endl;
  // freeing memory
  for( int j = 0 ; j < row ; j++ ){
     delete [] dynamicArr[j];
  }
  delete [] dynamicArr;
}
