#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
      cout << "m1:" << endl << endl;
      Matrix m1, m2, m3, m4;
      m1 = Matrix(5,4);
      m1.changeEntry(1, 1, 6);
      m1.changeEntry(5, 3, 88);
      m1.printMatrix();
      cout <<  endl << "After m1.scalarMultiply(5)" << endl << endl;
      m1.scalarMultiply(5);
      m1.printMatrix();

      cout << "m2:" << endl << endl;
      m2 = Matrix(3,3);
      m2.changeEntry(1, 1, 1);
      m2.changeEntry(1, 2, 2);
      m2.changeEntry(1, 3, 3);
      m2.changeEntry(2, 1, 4);
      m2.changeEntry(2, 2, 5);
      m2.changeEntry(2, 3, 6);
      m2.changeEntry(3, 1, 7);
      m2.changeEntry(3, 2, 8);
      m2.changeEntry(3, 3, 9);
      m2.printMatrix();
      cout << endl << "After m2.scalarMultiply(3)" << endl << endl;
      m2.scalarMultiply(3);
      m2.printMatrix();

      cout << "m3:" << endl << endl;
      m3 = Matrix(3,3);
      m3.changeEntry(1, 1, 1);
      m3.changeEntry(1, 2, 6);
      m3.changeEntry(1, 3, 0);
      m3.changeEntry(2, 1, 2);
      m3.changeEntry(2, 2, 8);
      m3.changeEntry(2, 3, 7);
      m3.changeEntry(3, 1, 1);
      m3.changeEntry(3, 2, 6);
      m3.changeEntry(3, 3, 5);
      m3.printMatrix();
      cout << endl << "After m3.scalarMultiply(2)" << endl << endl;
      m3.scalarMultiply(2);
      m3.printMatrix();

      cout << "m4:" << endl << endl;
      m4 = m2 + m3;
      cout << "m4 = m2 + m3" << endl;
      if (m4.getMatrix() == NULL ) cout << "m2 and m3 do not have the same size, so there sum cannot be determined." << endl;
      m4.printMatrix();
      return 0;
}


// printing the elements of the matrix
/*      for (i = 1; i <= m1.getNumRows(); i++) {
      for (j = 1; j <= m1.getNumColumns(); j++) {
            cout << "m1[" << i << "][" << j << "] = " << (m1.getMatrix())[m1.index(i,j)] << endl;
      }
      cout << endl;
}
*/
