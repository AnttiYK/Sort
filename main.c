#include <stdlib.h>
#include <stdio.h>
#include "sortfunctions.h"


void printArr(int* arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d, ", arr[i]);
        if(i != 0 && (i + 1) % 10 == 0) printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    time_t t;
    int size = 100;
    int arr[size];
    for(int i = 0; i < size; i++){
        arr[i] = (rand() % 1000);
    }

    printArr(arr, size);
    shellSort(arr, size);
    printf("\n");
    printArr(arr, size);

    return 0;
}