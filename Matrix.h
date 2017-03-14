#include <stdlib.h>

using namespace std;

class Matrix {
	private:
      		int num_columns;
      		int num_rows;
      		/* m is an array of size (num_rows * num_columns) that will represent the two dimensional matrix. m will be dynamically allocated on the heap. Indexing the virtual 
		 * two dimensional matrix using two ints i and j where i and j begin at 0 and go up to num_rows - 1 and num_columns - 1 respectively.
      		 */
      		int *m;
	public:
      		// ========== Constructors ==========
      		Matrix();
      		Matrix(int num_r, int num_c);
      		Matrix(const Matrix &mat);

      		// ========== Destructors ==========
      		~Matrix();


      		/* void scalarMultiply(double num) multiplies every entry of the array by num
       		*/
      		void scalarMultiply(double num);

      		/* void printMatrix() prints out each element of the array so that it looks like the virtual two dimensional matrix
       		*/
      		void printMatrix();

      		/*
       		 * int index(int i, int j) returns the actual index of the single dimensional array m that corresponds to the virtual [i][j] index of the
      		 * virtual two dimensional matrix.
     		 * Arugments: 1 <= i <= num_rows  ...  1 <= j <= num_columns
      		 */
      		int index(int i, int j) const;

      		/* void changeEntry(int i, int j, int value) updates the element at the poisiton [i][j] of the virtual marix to be the value parameter.
       		* This function uses the index(int i, int j) function, so the arguments i and j must follow the specifications for the index function
      		*/
      		void changeEntry(int i, int j, int value);

      		/* bool isSquare() returns true if and only if the matrix is a square matrix, that is num_rows == num_columns
       		*/
      		bool isSquare() const;

      		/*
      		 * bool sameSize(const Matrix &m) returns true if and only if num_rows of both matricies are equal and num_columns of both matricies
      		 * are equal.
      		 */
      		bool sameSize(const Matrix &m);

      		// ========== Operation Overloading ==========
      		Matrix& operator+(const Matrix &m);
      		Matrix& operator=(const Matrix &m);
		Matrix& operator*(const Matrix &m);

      		// ========== Setters ==========

      		// ========== Getters ==========
      		int getNumColumns() const;
      		int getNumRows() const;
      		int *getMatrix() const;
};
