#include<stdio.h>
void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}
void merge(int arr[], int low, int mid, int high){
    int i, j, k, b[100];

    i = low;
    j = mid+1;
    k = low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            b[k] = arr[i];
            k++;
            i++;
        }
        else{
            b[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        b[k] = arr[i];
        k++;
        i++;
    }
    while(j<=high){
        b[k] = arr[j];
        k++;
        j++;
    }
    for(int i=low; i<=high; i++){
        arr[i] = b[i];
    }
}
void mergeSort(int arr[], int low, int high ){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}
int main(){
    int arr[] = {9, 5, 8, 2, 6, 7, 1, 4, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted array is: ");
    printArray(arr, size);
    mergeSort(arr, 0, size);
    printf("\nSorted array is: ");
    printArray(arr, size);
    return 0;
}