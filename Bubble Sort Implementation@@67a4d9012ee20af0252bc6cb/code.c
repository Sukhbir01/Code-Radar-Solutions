

int bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                 int vari = arr[j];
                arr[j] = arr[i];
                arr[i] = vari;
            }
        }
    }
}
int printArray(int arr[],int n) {
    for(int i = 0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}