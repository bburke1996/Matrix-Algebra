#include "Matrix.h"
#include <iostream>

// ========== Constructors ==========

Matrix::Matrix() {

}

Matrix::Matrix(int num_r, int num_c) {
      num_columns = num_c;
      num_rows = num_r;
      m = new int[num_rows*num_columns]();                 // element m[i][j] is accessed using ary[i*num_columns+j].... the () initializes every element to 0
}

Matrix::Matrix(const Matrix &mat) {
      Matrix retVal = new Matrix(mat.getNumRows(), mat.getNumColumns());
      int i, j;
      for (i = 1; i <= retVal.getNumRows(); i++) {
            for (j = 1; j <= retVal.getNumColumns(); j++) {
                  retVal.changeEntry(i, j, mat.getMatrix()[mat.index(i,j)]);
            }
      }
}

// ========== Destructors ==========

Matrix::~Matrix() {

}

void Matrix::scalarMultiply(int num) {
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

int Matrix::index(int i, int j) {
      return ((i - 1) *num_columns + (j - 1));
}

void Matrix::changeEntry(int i, int j, int value) {
      getMatrix()[index(i, j)] = value;
}
bool Matrix::isSquare() {
      return (num_rows == num_columns);
}

// ========== Operation Overloading ==========

Matrix& Matrix::operator+(const Matrix &matrix2) {
      Matrix *mat;
      if (num_rows == matrix2.getNumRows() && num_columns == matrix2.getNumColumns()) {
            mat = new Matrix(num_rows, num_columns);
            int i, j;
            for (i = 1; i <= num_rows; i++) {
                  for (j = 1; j <= num_columns; j++) {
                        mat.changeEntry(i, j, getMatrix()[index(i,j)] + matrix2.getMatrix()[index(i,j)]);
                  }
            }
      }
      return (*mat);
}

Matrix& Matrix::operator=(const Matrix &m) {
      Matrix *retVal = new Matrix(m);
      return *retVal;
}
// ========== Setters ==========


// ========== Getters ==========
int Matrix::getNumRows() {
      return num_rows;
}

int Matrix::getNumColumns() {
      return num_columns;
}

int *Matrix::getMatrix() {
      return m;
}
