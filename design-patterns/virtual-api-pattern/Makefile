
main : main.o obj.o obj_impl.o
	gcc ./build/main.o ./build/obj.o ./build/obj_impl.o -o ./bin/main.exe

main.o : ./src/main.c
	gcc ./src/main.c -c -o ./build/main.o

obj.o : ./src/obj.c
	gcc ./src/obj.c -c -o ./build/obj.o

obj_impl.o : ./src/obj_impl.c
	gcc ./src/obj_impl.c -c -o ./build/obj_impl.o
