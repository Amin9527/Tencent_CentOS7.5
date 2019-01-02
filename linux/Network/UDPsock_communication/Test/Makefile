client server:client.cc server.cc
	g++ -o server.i -E server.cc
	g++ -o server.s -S server.i -std=c++11
	g++ -o server.o -c server.s
	g++ -o server server.o
	g++ -o client.i -E client.cc
	g++ -o client.s -S client.i -std=c++11
	g++ -o client.o -c client.s
	g++ -o client client.o
.PHONY:clean
clean:
	rm -f server.i server.s server.o server client.i client.s client.o client
