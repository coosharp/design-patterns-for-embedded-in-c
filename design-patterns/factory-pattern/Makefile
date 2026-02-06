
main : main.o display.o st7735.o st7789.o ili9341.o
	gcc ./build/main.o ./build/display.o ./build/st7735.o ./build/st7789.o ./build/ili9341.o -o ./bin/main.exe

main.o : ./src/main.c
	gcc ./src/main.c -c -o ./build/main.o

display.o : ./src/display.c
	gcc ./src/display.c -c -o ./build/display.o

st7735.o : ./src/st7735.c
	gcc ./src/st7735.c -c -o ./build/st7735.o

st7789.o : ./src/st7789.c
	gcc ./src/st7789.c -c -o ./build/st7789.o

ili9341.o : ./src/ili9341.c
	gcc ./src/ili9341.c -c -o ./build/ili9341.o
