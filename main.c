#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "sortfunctions.h"


void printArr(int* arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d, ", arr[i]);
        if(i != 0 && (i + 1) % 10 == 0) printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int size = 100;
    int arr[size];
    char input[100];
    int isRunning = 1;
    for(int i = 0; i < size; i++){
        arr[i] = (rand() % 1000);
    }
    while(isRunning){
        fgets(input, 100, stdin);
        switch(input[0]){

            case'A':
                for(int i = 0; i < size; i++){
                    arr[i] = (rand() % 1000);
                }
                
                break;

            case'P':
                printArr(arr, size);
                break;
            
            case'S':
                clock_t start = clock();
                shellSort(arr, size);
                clock_t end = clock();
                double time = (double)(end - start) / CLOCKS_PER_SEC;
                printf("\nShellsort execution time: %f\n", time);
                break;


            case'Q':
                isRunning = 0;
                break;

            default:
                printf("\nA : reshuffles array\nP : print array\nS : shell sort\nQ : quit\n");
        }
    }

    return 0;
}