default: main.o shellsort.o  insertionsort.o
	gcc main.o shellsort.o insertionsort.o -o sort

clean:
	rm *.o
	rm sort

main.o: main.c
	gcc -c -o main.o main.c -Wall

shellsort.o: shellsort.c
	gcc -c -o shellsort.o shellsort.c -Wall

insertionsort.o: insertionsort.c
	gcc -c -o insertionsort.o insertionsort.c -Wall
	

run: main.o shellsort.o
	./sort