default: main.o shellsort.o
	gcc main.o shellsort.o -o sort

clean:
	rm *.o
	rm sort

main.o: main.c
	gcc -c -o main.o main.c -Wall

shellsort.o: shellsort.c
	gcc -c -o shellsort.o main.c -Wall

run: main.o shellsort.o
	./sort