#include<stdio.h>
void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}
void selection_sort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int min_idx = i;
        for(int j=i+1; j<=size-1; j++){
           if(arr[j] < arr[min_idx]){
              min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    int arr[] = {5, 9, 2, 7, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted array is: ");
    printArray(arr, size);
    selection_sort(arr, size);
    printf("\nSorted array is: ");
    printArray(arr, size);
    return 0;
}