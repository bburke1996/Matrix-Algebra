#include "Matrix.h"
#include <iostream>

/* The "multiplication size requirement", as seen in the comment above the Matrix& operator*(const Matrix &m) function, is that the number  */

// ========== Constructors ==========

Matrix::Matrix() {
      num_columns = 0;
      num_rows = 0;
      m = NULL;
}

Matrix::Matrix(int num_r, int num_c) {
      num_columns = num_c;
      num_rows = num_r;
      m = new int[num_rows*num_columns]();                 // element m[i][j] is accessed using ary[i*num_columns+j].... the () initializes every element to 0
}

Matrix::Matrix(const Matrix &mat) {
      num_rows = mat.getNumRows();
      num_columns = mat.getNumColumns();
      Matrix *retVal = new Matrix(mat.getNumRows(), mat.getNumColumns());
      int i, j;
      for (i = 1; i <= retVal->getNumRows(); i++) {
            for (j = 1; j <= retVal->getNumColumns(); j++) {
                  retVal->changeEntry(i, j, mat.getMatrix()[mat.index(i,j)]);
            }
      }
      m = retVal->getMatrix();
      //delete retVal;
}

// ========== Destructors ==========

Matrix::~Matrix() {
	delete(m);
}

// ========== Funtctions ===========

void Matrix::scalarMultiply(double num) {
      int i;
      for (i = 0; i < (num_rows * num_columns); i++) {
            m[i] *= num;
      }
}

void Matrix::printMatrix() {
      int i, j;
      for (i = 1; i <= num_rows; i++) {
            for (j = 1; j <= num_columns; j++) {
                  cout << getMatrix()[index(i,j)] << '\t';
            }
            cout << endl;
      }
}

int Matrix::index(int i, int j) const {
      return ((i - 1) * num_columns + (j - 1));
}

void Matrix::changeEntry(int i, int j, int value) {
      getMatrix()[index(i, j)] = value;
}
bool Matrix::isSquare() const {
      return (num_rows == num_columns);
}

bool Matrix::sameSize(const Matrix &m) {
      if (num_rows == m.getNumRows() && num_columns == m.getNumColumns()) {
            return true;
      }
      return false;
}

// ========== Operation Overloading ==========

/* Matrix Addition */
/* Note that a segmentation fault will likely occur if two matricies of different sizes are added using this overloaded operator. So, you must verify that the sizes are the same before you call this function */
Matrix& Matrix::operator+(const Matrix &matrix2) {
      Matrix *mat;
	/* Matrix addition only works when both matricies are the same size */
      if (num_rows == matrix2.getNumRows() && num_columns == matrix2.getNumColumns()) {
            mat = new Matrix(num_rows, num_columns);
            int i, j;
            for (i = 1; i <= num_rows; i++) {
                  for (j = 1; j <= num_columns; j++) {
                        mat->changeEntry(i, j, (getMatrix()[index(i,j)]) + (matrix2.getMatrix()[matrix2.index(i,j)]));
                  }
            }
      }
      return (*mat);
}

/* Assignment Operator */
Matrix& Matrix::operator=(const Matrix &matrix2) {
      Matrix *matrix_copy = new Matrix(matrix2);
      num_rows = matrix2.getNumRows();
      num_columns = matrix2.getNumColumns();
      delete m;
      m = matrix_copy->getMatrix();
	//delete matrix_copy;
      return *this;
}

/* Matrix Multiplication */
/* Note that a segmentation fault will likely occur if two matricies that don't meet the matrix multiplication size requirements (documented above) are multiplied using this overloaded operator. So, you must verify that the sizes meet the requirement before you call this function */
Matrix& Matrix::operator*(const Matrix &matrix2) {
	Matrix *ret;
	if (num_columns ==  matrix2.getNumRows()) {
		ret = new Matrix(num_rows, matrix2.getNumColumns());
		int i, j, k, sum;
		for (i = 1; i <= num_rows; i++) {
			for (j = 1; j <= matrix2.getNumColumns(); j++) {
				sum = 0;
				for (k = 1; k <= num_columns; k++) {
					sum = sum + (m[index(i, k)] * matrix2.getMatrix()[matrix2.index(k, j)]);
				}
				ret->changeEntry(i, j, sum);
			}
		}
	}
	return *ret;
}

// ========== Setters ==========


// ========== Getters ==========
int Matrix::getNumRows() const {
      return num_rows;
}

int Matrix::getNumColumns() const {
      return num_columns;
}

int *Matrix::getMatrix() const {
      return m;
}
