#include <iostream>
#include "Matrix.h"
#include "time.h"

using namespace std;

void randomInitialization(Matrix &mat) {
	int i, j, randomEntry, sign;
	for (i = 1; i <= mat.getNumRows(); i++) {
		for (j = 1; j <= mat.getNumColumns(); j++) {
			// Generate a random number between 0 and 10. This will be the absolute value of the random entry
			randomEntry = rand() % 11;
			// Generate a random number between 0 and 1. If 0 is generated, then we'll make the random entry negative. Otherwise, it'll be positive.
			sign = rand() % 2;
			if (sign == 0) sign = -1;
			mat.changeEntry(i, j, sign * randomEntry);
		}
	}
}

int main() {
	/* ========== Testing Scalar Multiplication =========== */
	string spacer = "========================================";
	cout << spacer << "Testing Scalar Multiplication" << spacer << endl << endl;
	
	/* I want to test that matricies of sizes 1x1, 2x2, 5x5, 1x2, 2x1, 2x4, 4x2 all can be multplied by 0, -1, 1, 3, and 3 properly using scalar multiplication */

	// m1, m2, m3 are matricies of size 1x1, 2x2, 5x5, 1x2, 2x1, 2x4, 4x2
	Matrix m1(1, 1), m2(2, 2), m3(5,5), m4(1, 2), m5(2, 1), m6(2, 4), m7(4, 2);

	// Giving m1, m2, m3 pseudo random intitial values between -10 (inclusive) and 10 (inclusive)
	randomInitialization(m1);
	randomInitialization(m2);
	randomInitialization(m3);
	randomInitialization(m4);
	randomInitialization(m5);
	randomInitialization(m6);
	randomInitialization(m7);

	// Testing m1 * 0 = 0 matrix
	cout << "m1:" << endl;
	m1.printMatrix();
	m1.scalarMultiply(0);
	cout << "m1 after being multiplied by 0:" << endl;
	m1.printMatrix();
	cout << endl;

	// Testing m2 * 0 = 0 matrix
	cout << "m2:" << endl;
	m2.printMatrix();
	m2.scalarMultiply(0);
	cout << "m2 after being multiplied by 0:" << endl;
	m2.printMatrix();
	cout << endl;

	// Testing m3 * 0 = 0 matrix
	cout << "m3:" << endl;
	m3.printMatrix();
	m3.scalarMultiply(0);
	cout << "m3 after being multiplied by 0:" << endl;
	m3.printMatrix();
	cout << endl;

	// Testing m4 * 0 = 0 matrix
	cout << "m4:" << endl;
	m4.printMatrix();
	m4.scalarMultiply(0);
	cout << "m4 after being multiplied by 0:" << endl;
	m4.printMatrix();
	cout << endl;

	// Testing m5 * 0 = 0 matrix
	cout << "m5:" << endl;
	m5.printMatrix();
	m5.scalarMultiply(0);
	cout << "m5 after being multiplied by 0:" << endl;
	m5.printMatrix();
	cout << endl;

	// Testing m6 * 0 = 0 matrix
	cout << "m6:" << endl;
	m6.printMatrix();
	m6.scalarMultiply(0);
	cout << "m6 after being multiplied by 0:" << endl;
	m6.printMatrix();
	cout << endl;

	// Testing m7 * 0 = 0 matrix
	cout << "m7:" << endl;
	m7.printMatrix();
	m7.scalarMultiply(0);
	cout << "m7 after being multiplied by 0:" << endl;
	m7.printMatrix();
	cout << endl;



	//=================================
	cout << endl << spacer << endl;

	// Giving m1, m2, m3 pseudo random intitial values between -10 (inclusive) and 10 (inclusive)
	randomInitialization(m1);
	randomInitialization(m2);
	randomInitialization(m3);
	randomInitialization(m4);
	randomInitialization(m5);
	randomInitialization(m6);
	randomInitialization(m7);

	// Testing m1 * 1 = m1
	cout << "m1:" << endl;
	m1.printMatrix();
	m1.scalarMultiply(1);
	cout << "m1 after being multiplied by 1:" << endl;
	m1.printMatrix();
	cout << endl;

	// Testing m2 * 1 = m2
	cout << "m2:" << endl;
	m2.printMatrix();
	m2.scalarMultiply(1);
	cout << "m2 after being multiplied by 1:" << endl;
	m2.printMatrix();
	cout << endl;

	// Testing m3 * 1 = m3
	cout << "m3:" << endl;
	m3.printMatrix();
	m3.scalarMultiply(1);
	cout << "m3 after being multiplied by 1:" << endl;
	m3.printMatrix();
	cout << endl;
	
	// Testing m4 * 1 = m4
	cout << "m4:" << endl;
	m4.printMatrix();
	m4.scalarMultiply(1);
	cout << "m4 after being multiplied by 1:" << endl;
	m4.printMatrix();
	cout << endl;

	// Testing m5 * 1 = m5
	cout << "m5:" << endl;
	m5.printMatrix();
	m5.scalarMultiply(1);
	cout << "m5 after being multiplied by 1:" << endl;
	m5.printMatrix();
	cout << endl;

	// Testing m6 * 1 = m6
	cout << "m6:" << endl;
	m6.printMatrix();
	m6.scalarMultiply(1);
	cout << "m6 after being multiplied by 1:" << endl;
	m6.printMatrix();
	cout << endl;

	// Testing m7 * 1 = m7
	cout << "m7:" << endl;
	m7.printMatrix();
	m7.scalarMultiply(1);
	cout << "m7 after being multiplied by 1:" << endl;
	m7.printMatrix();
	cout << endl;



	//=================================
	cout << endl << spacer << endl;

	// Giving m1, m2, m3 pseudo random intitial values between -10 (inclusive) and 10 (inclusive)
	randomInitialization(m1);
	randomInitialization(m2);
	randomInitialization(m3);
	randomInitialization(m4);
	randomInitialization(m5);
	randomInitialization(m6);
	randomInitialization(m7);

	// Testing m1 * -1 = -m1
	cout << "m1:" << endl;
	m1.printMatrix();
	m1.scalarMultiply(-1);
	cout << "m1 after being multiplied by -1:" << endl;
	m1.printMatrix();
	cout << endl;

	// Testing m2 * -1 = -m2
	cout << "m2:" << endl;
	m2.printMatrix();
	m2.scalarMultiply(-1);
	cout << "m2 after being multiplied by -1:" << endl;
	m2.printMatrix();
	cout << endl;

	// Testing m3 * -1 = -m3
	cout << "m3:" << endl;
	m3.printMatrix();
	m3.scalarMultiply(-1);
	cout << "m3 after being multiplied by -1:" << endl;
	m3.printMatrix();
	cout << endl;

	// Testing m4 * -1 = -m4
	cout << "m4:" << endl;
	m4.printMatrix();
	m4.scalarMultiply(-1);
	cout << "m4 after being multiplied by -1:" << endl;
	m4.printMatrix();
	cout << endl;

	// Testing m5 * -1 = -m5
	cout << "m5:" << endl;
	m5.printMatrix();
	m5.scalarMultiply(-1);
	cout << "m5 after being multiplied by -1:" << endl;
	m5.printMatrix();
	cout << endl;

	// Testing m6 * -1 = -m6
	cout << "m6:" << endl;
	m6.printMatrix();
	m6.scalarMultiply(-1);
	cout << "m6 after being multiplied by -1:" << endl;
	m6.printMatrix();
	cout << endl;

	// Testing m7 * -1 = -m7
	cout << "m7:" << endl;
	m7.printMatrix();
	m7.scalarMultiply(-1);
	cout << "m7 after being multiplied by -1:" << endl;
	m7.printMatrix();
	cout << endl;


	//=================================
	cout << endl << spacer << endl;

	// Giving m1, m2, m3 pseudo random intitial values between -10 (inclusive) and 10 (inclusive)
	randomInitialization(m1);
	randomInitialization(m2);
	randomInitialization(m3);
	randomInitialization(m4);
	randomInitialization(m5);
	randomInitialization(m6);
	randomInitialization(m7);

	// Testing m1 * 3 = 3m1
	cout << "m1:" << endl;
	m1.printMatrix();
	m1.scalarMultiply(3);
	cout << "m1 after being multiplied by 3:" << endl;
	m1.printMatrix();
	cout << endl;

	// Testing m2 * 3 = 3m2
	cout << "m2:" << endl;
	m2.printMatrix();
	m2.scalarMultiply(3);
	cout << "m2 after being multiplied by 3:" << endl;
	m2.printMatrix();
	cout << endl;

	// Testing m3 * 3 = 3m3
	cout << "m3:" << endl;
	m3.printMatrix();
	m3.scalarMultiply(3);
	cout << "m3 after being multiplied by 3:" << endl;
	m3.printMatrix();
	cout << endl;

	// Testing m4 * 3 = 3m4
	cout << "m4:" << endl;
	m4.printMatrix();
	m4.scalarMultiply(3);
	cout << "m4 after being multiplied by 3:" << endl;
	m4.printMatrix();
	cout << endl;

	// Testing m5 * 3 = 3m5
	cout << "m5:" << endl;
	m5.printMatrix();
	m5.scalarMultiply(3);
	cout << "m5 after being multiplied by 3:" << endl;
	m5.printMatrix();
	cout << endl;

	// Testing m6 * 3 = 3m6
	cout << "m6:" << endl;
	m6.printMatrix();
	m6.scalarMultiply(3);
	cout << "m6 after being multiplied by 3:" << endl;
	m6.printMatrix();
	cout << endl;

	// Testing m7 * 3 = 3m7
	cout << "m7:" << endl;
	m7.printMatrix();
	m7.scalarMultiply(3);
	cout << "m7 after being multiplied by 3:" << endl;
	m7.printMatrix();
	cout << endl;



	//=================================
	cout << endl << spacer << endl;

	// Giving m1, m2, m3 pseudo random intitial values between -10 (inclusive) and 10 (inclusive)
	randomInitialization(m1);
	randomInitialization(m2);
	randomInitialization(m3);
	randomInitialization(m4);
	randomInitialization(m5);
	randomInitialization(m6);
	randomInitialization(m7);

	// Testing m1 * -3 = -3m1
	cout << "m1:" << endl;
	m1.printMatrix();
	m1.scalarMultiply(-3);
	cout << "m1 after being multiplied by -3:" << endl;
	m1.printMatrix();
	cout << endl;

	// Testing m2 * -3 = -3m2
	cout << "m2:" << endl;
	m2.printMatrix();
	m2.scalarMultiply(-3);
	cout << "m2 after being multiplied by -3:" << endl;
	m2.printMatrix();
	cout << endl;

	// Testing m3 * -3 = -3m3
	cout << "m3:" << endl;
	m3.printMatrix();
	m3.scalarMultiply(-3);
	cout << "m3 after being multiplied by -3:" << endl;
	m3.printMatrix();
	cout << endl;

	// Testing m4 * -3 = -3m4
	cout << "m4:" << endl;
	m4.printMatrix();
	m4.scalarMultiply(-3);
	cout << "m4 after being multiplied by -3:" << endl;
	m4.printMatrix();
	cout << endl;

	// Testing m5 * -3 = -3m5
	cout << "m5:" << endl;
	m5.printMatrix();
	m5.scalarMultiply(-3);
	cout << "m5 after being multiplied by -3:" << endl;
	m5.printMatrix();
	cout << endl;

	// Testing m6 * -3 = -3m6
	cout << "m6:" << endl;
	m6.printMatrix();
	m6.scalarMultiply(-3);
	cout << "m6 after being multiplied by -3:" << endl;
	m6.printMatrix();
	cout << endl;

	// Testing m7 * -3 = -3m7
	cout << "m7:" << endl;
	m7.printMatrix();
	m7.scalarMultiply(-3);
	cout << "m7 after being multiplied by -3:" << endl;
	m7.printMatrix();
	cout << endl;


	return 0;
}
