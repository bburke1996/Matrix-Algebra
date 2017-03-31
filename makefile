all: driver testScalarMultiply

testScalarMultiply: testScalarMultiply.o Matrix.o
	g++ -std=c++11 -g -Wall testScalarMultiply.o Matrix.o -o testScalarMultiply -Wall


driver: driver.o Matrix.o
	g++ -std=c++11 -g -Wall driver.o Matrix.o -o driver -Wall

Matrix.o: Matrix.cpp
	g++ -std=c++11 -g -c -Wall Matrix.cpp -Wall

driver.o: driver.cpp
	g++ -std=c++11 -g -c -Wall driver.cpp -Wall

tester.o: tester.cpp
	g++ -std=c++11 -g -c -Wall tester.cpp -Wall

clean:
	rm *.o *~ driver testScalarMultiply
