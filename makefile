all: driver

driver: driver.o Matrix.o
	g++ -std=c++11 -g -Wall driver.o Matrix.o -o driver

Matrix.o: Matrix.cpp
	g++ -std=c++11 -g -c -Wall Matrix.cpp

driver.o: driver.cpp
	g++ -std=c++11 -g -c -Wall driver.cpp

clean:
	rm *.o *~
