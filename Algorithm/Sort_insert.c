#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

void insert_sort(int arr[], int size){
    for(int i=1;i<size;++i){
        int key = arr[i];
        int j;
        for(j=i-1;j>=0&&key<arr[j];--j){
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
}

// int main(void){

//     int arr[SIZE] ={6,45,3,8,30,6,1,58,23,96};
//     for(int i=0;i<SIZE;i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     insert_sort(arr, SIZE);
//     for(int i=0;i<SIZE;i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
