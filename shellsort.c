#include "sortfunctions.h"

void shellSort(int* arr, int size){
    for(int interval = size / 2; interval > 0; interval /= 2){
        for(int i = 0; i < size; i+=interval){
            int j = i;
            while((j - interval) >= 0 && arr[j-interval] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[j-interval];
                arr[j - interval] = temp;
                j = j - interval;
            }
        }
    }
}

