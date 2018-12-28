test:question.cc
	g++ -o test.i -E $^
	g++ -o test.s -S test.i -lpthread -std=c++11
	g++ -o test.o -c test.s
	g++ -o test test.o
.PHONY:clean
clean:
	rm -f test.i test.s test.o test
