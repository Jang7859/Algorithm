//최선 : O(n^2)
//최악 : O(n^2)
void select_sort(int arr[], int size){
    for(int i=0;i<size-1;++i){//마지막 원소는 자동 정렬 되므로... 총 n-1번 반복.
        int min = i;
        for(int j=i+1;j<size;++j){
            if(arr[min]>arr[j]) min = j;
        }
        if(min!=i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    
}