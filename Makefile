all: main clean

main: main.c
	gcc main.c -o main

clean:
	rm *.o