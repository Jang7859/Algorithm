//
//  Sort_Quick.c
//  Algorithm
//
//  Created by 장재연 on 2021/03/09.
//

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void Swap(int *A, int *B){
    int temp = *A;
    *A = *B;
    *B = temp;
}

int Partition(int arr[], int left, int right){
    int i, j, pivot;
    i = left-1;
    pivot = arr[right];
    for(j=left;j<=right-1;j++){
        if(arr[j]<=pivot){
            i++;
            Swap(&arr[i], &arr[j]);
        }
    }
    Swap(&arr[i+1], &arr[right]);
    return (i+1);
}

void QuickSort(int arr[], int left, int right){
    if(left<right){
        int p = Partition(arr, left, right);
        
        QuickSort(arr, left, p-1);
        QuickSort(arr, p+1, right);
    }
}

//int main(void){
//    
//    int arr[SIZE] ={6,45,3,8,30,6,1,58,23,96};
//    for(int i=0;i<SIZE;i++){
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    QuickSort(arr,0, SIZE-1);
//    for(int i=0;i<SIZE;i++){
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    
//    return 0;
//}
