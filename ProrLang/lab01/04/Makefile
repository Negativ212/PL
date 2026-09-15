main.exe: message.o hello.o goodbye.o main.o
	g++ message.o hello.o goodbye.o main.o -o main.exe

message.o: message.cpp message.h
	g++ -c message.cpp -o message.o

hello.o: hello.cpp hello.h message.h
	g++ -c hello.cpp -o hello.o

goodbye.o: goodbye.cpp goodbye.h message.h
	g++ -c goodbye.cpp -o goodbye.o

main.o: main.cpp hello.h goodbye.h
	g++ -c main.cpp -o main.o

clean:
	del /Q *.o main.exe