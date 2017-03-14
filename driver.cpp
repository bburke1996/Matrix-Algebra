#include <iostream>
#include <string>
#include <limits>
#include "Matrix.h"

using namespace std;

int main() {
      cout << "=============== Matrix Algebra ===============" << endl << endl;
      int input = 0, rows = 0, columns = 0, rows1 = 0, columns1 = 0, rows2 = 0, columns2 = 0, scalarNum = 0, i, j, entry = 0;

	/* This while loop is used to control the whole program. Because of this while loop, the user can do multiple calculations without exiting the program. */
      while (1) {
		input = 0; rows1 = 0; columns1 = 0; rows2 = 0; columns2 = 0; scalarNum = 0; entry = 0;							

	/* This while loop ensures that the user can only enter '1', '2', or '3'. The loop will only exit on correct input. */
            while (1) {                                                 // Get operation input from the user
                  cout << "Choose an operation:" << endl << "1) Scalar Multiplication" << endl << "2) Matrix Addition" << endl << "3) Exit" << endl;
                  cin >> input;
                  if (input == 1 || input == 2 || input == 3) {
                        break;
                  } else {                                              // Input can only be '1' or '2' while we only support 2 operations
                        cout << "Invalid input. Enter either '1', '2', or '3'" << endl << endl;
                        // Next 2 lines clear the invalid input so we can ask for new input
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                  }
            }
	/* Scalar Multiplication */
            if (input == 1) {                                          
                  cout << endl << "Scalar Multiplication in Matrix Algebra is when a matrix is multiplied by a single scalar quantity." << endl << endl;
		/* This while loop ensures that the user can only enter positive integers for the number of rows. */
                  while (1) {
                        cout << "How many rows are in your matrix?" << endl;
                        cin >> rows;
                        if (cin.fail() || rows < 1) {                   // cin.fail() is true if the input can't be converted to an int
                              cout << "Invalid input. The number of rows must be a positive integer" << endl << endl;
                              // Next 2 lines clear the invalid input so we can ask for new input
                              cin.clear();
                              cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        } else break;
                  }	
		/* This while loop ensures that the user can only enter positive integers for the number of columns. */
                  while (1) {
                        cout << "How many columns are in your matrix?" << endl;
                        cin >> columns;
                        if (cin.fail() || columns < 1) {                // cin.fail() is true if the input can't be converted to an int
                              cout << "Invalid input. The number of columns must be a positive integer" << endl << endl;
                              // Next 2 lines clear the invalid input so we can ask for new input
                              cin.clear();
                              cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        } else break;
                  }

                  Matrix m1(rows, columns);
                  cout << endl;
		/* These nested for loops ask the user for each entry of their matrix and adds the values to the array. */
                  for (i = 1; i <= rows; i++) {
                        for (j = 1; j <= columns; j++) {
				/* This while loop ensures that the user only enters integers for the entries of the matrix */
                              while (1) {
                                    cout << "What is the value at row " << i << " column " << j << "?" << endl;
                                    cin >> entry;
                                    if (cin.fail()) {                   // cin.fail() is true if the input can't be converted to an int
                                          cout << "Invalid input. Each entry must be an integer." << endl << endl;
                                          // Next 2 lines clear the invlaid input so we can ask for new input
                                          cin.clear();
                                          cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                    } else break;
                              }
                              m1.changeEntry(i, j, entry);
                        }
                  }
		
		/* Printing out the matrix to the user. */
                  cout << endl << "Your matrix: " << endl;
                  m1.printMatrix();

		/* This while loop ensures that the user enters an integer for the scalar value that will the matrix will be multiplied by*/
                  while (1) {
                        cout << "What do you want to multiply this matrix by?" << endl;
                        cin >> scalarNum;
                        if (cin.fail()) {                               // cin.fail() is true if the input can't be converted to an int
                              cout << "Invalid input. You must enter an integer." << endl << endl;
                              // Next 2 lines clear the invalid input so we can ask for new input
                              cin.clear();
                              cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        } else break;
                  }

                  m1.scalarMultiply(scalarNum);

		/* Printing out the resulting matrix to the user. */
                  cout << endl << "Your matrix after being multiplied by " << scalarNum << ": " << endl;
                  m1.printMatrix();
            }

	/* Matrix Addition */
	    else if (input == 2) {
                  cout << endl << "Matrix Addition in Matrix Algebra is when a matrix is added to another matrix. The two matricies to be added must be the same size. So, the number of rows of the first matrix must equal the number of rows of the second matrix, and the number of columns of the first matrix must be equal to the number of columns of the second matirx." << endl << endl;
		/* This while loop ensures that the user enters a positive integer for the number of rows */
                  while (1) {
                        cout << "How many rows are in your first matrix?" << endl;
                        cin >> rows1;
                        if (cin.fail() || rows1 < 1) {                   // cin.fail() is true if the input can't be converted to an int
                              cout << "Invalid input. The number of rows must be a positive integer" << endl << endl;
                              // Next 2 lines clear the invalid input so we can ask for new input
                              cin.clear();
                              cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        } else break;
                  }
		/* This while loop ensures that the user enters a positive integer for the number of columns. */
                  while (1) {
                        cout << "How many columns are in your first matrix?" << endl;
                        cin >> columns1;
                        if (cin.fail() || columns1 < 1) {                // cin.fail() is true if the input can't be converted to an int
                              cout << "Invalid input. The number of columns must be a positive integer" << endl << endl;
                              // Next 2 lines clear the invalid input so we can ask for new input
                              cin.clear();
                              cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        } else break;
                  }

                  Matrix m1(rows1, columns1);
                  cout << endl;
		/* These nested for loops ask the user for each entry of the matirx and updates the values. */
                  for (i = 1; i <= rows1; i++) {
                        for (j = 1; j <= columns1; j++) {
				/* This while loop ensures that the user only enters integers for each entry of the matrix. */
                              while (1) {
                                    cout << "What is the value at row " << i << " column " << j << " of your first matrix?" << endl;
                                    cin >> entry;
                                    if (cin.fail()) {                   // cin.fail() is true if the input can't be converted to an int
                                          cout << "Invalid input. Each entry must be an integer." << endl << endl;
                                          // Next 2 lines clear the invlaid input so we can ask for new input
                                          cin.clear();
                                          cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                    } else break;
                              }
                              m1.changeEntry(i, j, entry);
                        }
                  }

		/* Printing out the first matrix to the user */
                  cout << endl << "Your first matrix: " << endl;
                  m1.printMatrix();
	
		/* This while loop ensures that the user enters a positive integer for the number of rows. */
                  while (1) {
                        cout << "How many rows are in your second matrix?" << endl;
                        cin >> rows2;
                        if (cin.fail() || rows2 < 1) {                   // cin.fail() is true if the input can't be converted to an int
                              cout << "Invalid input. The number of rows must be a positive integer" << endl << endl;
                              // Next 2 lines clear the invalid input so we can ask for new input
                              cin.clear();
                              cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        } else break;
                  }
		/* This while loop ensures that the user enters a positive integer for the number of columns. */
                  while (1) {
                        cout << "How many columns are in your second matrix?" << endl;
                        cin >> columns2;
                        if (cin.fail() || columns2 < 1) {                // cin.fail() is true if the input can't be converted to an int
                              cout << "Invalid input. The number of columns must be a positive integer" << endl << endl;
                              // Next 2 lines clear the invalid input so we can ask for new input
                              cin.clear();
                              cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        } else break;
                  }

	/* Before doing matrix addition, we must check that both matricies are the same size. If they aren't then we must print the error and return to the main menu*/
	if (rows1 != rows2 || columns1 != columns2) {
		cout << endl << "You cannot add two matricies that are different sizes." << endl << endl;
		continue;
	}
                  Matrix m2(rows2, columns2);
                  cout << endl;
		/* These nested for loops ask the user for each entry's value and updates the values in the matrix. */
                  for (i = 1; i <= rows2; i++) {
                        for (j = 1; j <= columns2; j++) {
				/* This while loop ensures that the user only enters integers for each entry. */
                              while (1) {
                                    cout << "What is the value at row " << i << " column " << j << " of your second matrix?" << endl;
                                    cin >> entry;
                                    if (cin.fail()) {                   // cin.fail() is true if the input can't be converted to an int
                                          cout << "Invalid input. Each entry must be an integer." << endl << endl;
                                          // Next 2 lines clear the invlaid input so we can ask for new input
                                          cin.clear();
                                          cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                    } else break;
                              }
                              m2.changeEntry(i, j, entry);
                        }
                  }

		/* Printing the second matrix to the user.  */
                  cout << endl << "Your second matrix: " << endl;
                  m2.printMatrix();

	
                  Matrix m3 = m1 + m2;

                  cout << endl << "The sum of the two matricies you entered is: " << endl;
                  m3.printMatrix();
 
            }	


		else if (input == 3) {
			cout << "Exiting..." << endl;
			exit(0);
		}
		cout << endl;
      }

      return 0;
}
