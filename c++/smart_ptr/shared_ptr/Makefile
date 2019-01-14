test:test.cc
	g++ -o test.i -E test.cc
	g++ -o test.s -S test.i -std=c++11
	g++ -o test.o -c test.s
	g++ -o test test.o
.PHONY:clean
	rm -f test.i test.s test.o test
