void bubbleSort(int arr[],int n){
    int i,j;
    for(i=0;i<(n-1);i++){
        for(j=0;j<(j-i-1);j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}