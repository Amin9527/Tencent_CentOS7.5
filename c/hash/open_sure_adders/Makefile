test:test.cc test.h
	g++ -o test.i -E test.cc
	g++ -o test.s -S test.i
	g++ -o test.o -c test.s
	g++ -o test test.o
.PHONY:clean
clean:
	rm -f test test.i test.s test.o
