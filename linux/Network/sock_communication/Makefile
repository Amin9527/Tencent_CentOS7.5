test:client.cc server.cc
	g++ -o client.i -E client.cc
	g++ -o server.i -E server.cc
	g++ -o client.s -S client.i -std=c++11
	g++ -o server.s -S server.i -std=c++11
	g++ -o client.o -c client.s
	g++ -o server.o -c server.s
	g++ -o test client.o server.o
.PHONY:clean
clean:
	rm -f client.i server.i client.s server.s client.o server.o test
