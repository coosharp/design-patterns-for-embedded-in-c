# file : Makefile
main : main.o client.o server.o drawer.o bridge.o
	gcc ./build/main.o ./build/client.o ./build/server.o ./build/drawer.o ./build/bridge.o -o ./bin/main.exe

main.o : ./src/main.c
	gcc ./src/main.c -c -o ./build/main.o

client.o : ./src/client.c
	gcc ./src/client.c -c -o ./build/client.o

server.o : ./src/server.c
	gcc ./src/server.c -c -o ./build/server.o

drawer.o : ./src/drawer.c
	gcc ./src/drawer.c -c -o ./build/drawer.o

bridge.o : ./src/bridge.c
	gcc ./src/bridge.c -c -o ./build/bridge.o
