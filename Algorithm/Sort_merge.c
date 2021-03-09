//
//  main.c
//  Algorithm
//
//  Created by 장재연 on 2021/03/09.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 10
void Merge(int arr[], int left, int mid, int right){
    int i, j, k=0;
    i=left; j=mid+1;
    int *temparr = (int*)malloc(sizeof(int)*(right-left+1));
    
    while(i<=mid&&j<=right){
        if(arr[i]<arr[j]) temparr[k++] = arr[i++];
        else temparr[k++] = arr[j++];
    }
    
    while(i<=mid)temparr[k++] = arr[i++];
    while(j<=right) temparr[k++] = arr[j++];
    k--;
    
    while(k>=0){
        arr[left+k] = temparr[k];
        k--;
    }
    
}

void MergeSort(int arr[], int left, int right){
    if(left<right){
        int mid = left + (right-left)/2;
        
        MergeSort(arr, left, mid);
        MergeSort(arr, mid+1, right);
        
        Merge(arr, left, mid, right);
        
    }
}

int main(void){
    
    int arr[SIZE] ={6,45,3,8,30,6,1,58,23,96};
    for(int i=0;i<SIZE;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    MergeSort(arr,0, SIZE-1);
    for(int i=0;i<SIZE;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

