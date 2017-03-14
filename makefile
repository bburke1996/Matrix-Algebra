all: driver testScalarMultiply

testScalarMultiply: testScalarMultiply.o Matrix.o
	g++ -std=c++11 -g -Wall testScalarMultiply.o Matrix.o -o testScalarMultiply


driver: driver.o Matrix.o
	g++ -std=c++11 -g -Wall driver.o Matrix.o -o driver

Matrix.o: Matrix.cpp
	g++ -std=c++11 -g -c -Wall Matrix.cpp

driver.o: driver.cpp
	g++ -std=c++11 -g -c -Wall driver.cpp

tester.o: tester.cpp
	g++ -std=c++11 -g -c -Wall tester.cpp

clean:
	rm *.o *~ driver testScalarMultiply
