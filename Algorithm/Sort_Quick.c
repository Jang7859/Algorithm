////
////  Sort_Quick.c
////  Algorithm
////
////  Created by 장재연 on 2021/03/09.
////
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define SIZE 10
//void Swap(int *A, int *B){
//    int temp = *A;
//    *A = *B;
//    *B = temp;
//}
//
////int Partition(int arr[], int left, int right){
////    int i, j, pivot;
////    i = left-1;
////    pivot = arr[right];
////    for(j=left;j<=right-1;j++){
////        if(arr[j]<=pivot){
////            i++;
////            Swap(&arr[i], &arr[j]);
////        }
////    }
////    Swap(&arr[i+1], &arr[right]);
////    return (i+1);
////}
////
////void QuickSort(int arr[], int left, int right){
////    if(left<right){
////        int p = Partition(arr, left, right);
////
////        QuickSort(arr, left, p-1);
////        QuickSort(arr, p+1, right);
////    }
////}
//
//int Partition(int arr[], int left, int right){
//    int i, j, pivot;
//    i=left-1; j=left; pivot = arr[right];
//    for(;j<=right-1;j++){
//        if(arr[j]<=pivot){
//            i++;
//            Swap(&arr[i], &arr[j]);
//        }
//    }
//    Swap(&arr[i+1], &arr[right]);
//    return (i+1);
//}
//
//void QuickSort(int arr[], int left, int right){
//    if(left<right){
//        int p = Partition(arr, left, right);
//        
//        QuickSort(arr, left, p-1);
//        QuickSort(arr, p+1, right);
//    }
//}
//
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
void solve(int* nums, int numsSize, int* returnSize, int** returnColumnSizes, int** ans, int arr[], int depth, int k){
    if(depth==numsSize-1){
        *(ans+*returnSize) = (int*)malloc(sizeof(int)*(k));
        memcpy(*(ans+*returnSize), arr, sizeof(int)*k);
        *(*returnColumnSizes+*returnSize) = k;
        (*returnSize)++;
        return;
    }
    if(depth==-1){
        *(ans+*returnSize) = NULL;
        *(*returnColumnSizes+*returnSize) = 1;
        (*returnSize)++;
        
    }else{
        *(ans+*returnSize) = (int*)malloc(sizeof(int)*(k));
        memcpy(*(ans+*returnSize), arr, sizeof(int)*k);
        *(*returnColumnSizes+*returnSize) = k;
        (*returnSize)++;
        
        
    }
    for(int i=depth+1;i<numsSize;i++){
        
        arr[k] = nums[i];
        for(int j=0;j<=k;j++){
            printf("%d ", arr[j]);
        }
        printf("\n");
        solve(nums, numsSize, returnSize, returnColumnSizes, ans, arr, i, k+1);
    }
    
}

int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int **ans = (int**)malloc(sizeof(int*)*1000);
    *returnColumnSizes = (int*)malloc(sizeof(int)*1000);
    int arr[numsSize];
    
    solve(nums, numsSize, returnSize, returnColumnSizes, ans, arr, -1, 0);
    return ans;
}

int main(void){
    int nums[5] = {1,2,3,4,5};
    int returnSize;
    int *returnColumnSizes;
    int ** subset = subsets(nums, 5, &returnSize, &returnColumnSizes);
    
    
    return 0;
}
