test:test.cc
	g++ -o test.i -E test.cc -std=c++11
	g++ -o test.s -S test.i -std=c++11
	g++ -o test.o -c test.s -std=c++11
	g++ -o test test.o -std=c++11
.PHONY:clean
clean:
	rm -f test test.i test.s test.o
