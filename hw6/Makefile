main: main.o matrix.o
	g++ main.o matrix.o -o main

main.o: main.cpp matrix.hpp
	g++ -c main.cpp

matrix.o: matrix.cpp matrix.hpp
	g++ -c matrix.cpp

clean:
	rm -f main.o matrix.o main 
