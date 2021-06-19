void bubble_sort(int arr[], int size){
    for(int i=size-1;i>0;--i){
        for(int j=0;j<i;++j){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void){

    int arr[SIZE] ={6,45,3,8,30,6,1,58,23,96};
    for(int i=0;i<SIZE;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubble_sort(arr, SIZE);
    for(int i=0;i<SIZE;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}