all: bubble_sort

main.o: main.c
	gcc -c -g -o main.o main.c

bubble_sort: main.o
	gcc -g -o bubble_sort main.o

clean:
	rm -f *.o
	rm -f bubble_sort

