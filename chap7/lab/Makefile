mathop: main.o add.o sub.o mul.o div.o
	gcc main.o add.o sub.o mul.o div.o -o testmymath
main.o: main.c mathop.h
	gcc -c main.c
add.o: add.c mathop.h
	gcc -c add.c
sub.o: sub.o mathop.h
	gcc -c sub.c
mul.o: mul.c mathop.h
	gcc -c mul.c
div.o: div.c mathop.h
	gcc -c div.c
