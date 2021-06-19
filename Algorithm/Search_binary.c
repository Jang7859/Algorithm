int find(int arr[], int left, int right, int target){
    if(left<=right){
        int mid = left+(right-left)/2;
        
        if(target==arr[mid]) return mid;
        
        if(target<arr[mid]) return find(arr, left, mid-1, target);
        else return find(arr, mid+1, right, target);
    }else return -1;
}

//int main(void){
//
//    int arr[10] ={1, 3, 6, 6, 8, 23, 30, 45, 58, 96};
//    int target = 23;
//    printf("찾는 값 %d의 index : %d\n",target ,find(arr, 0, 9,target));
//
//
//    return 0;
//}