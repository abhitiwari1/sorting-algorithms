#include<stdio.h>
#include<stdbool.h>
void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}
void bubble_sort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        bool swapp = true;  // Array is already sorted
        for(int j=0; j<size-i-1; j++){
           if(arr[j]>arr[j+1]){
              int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
              swapp = false;
            }
        }
        if(swapp == true)
        break;
    }
}
int main(){
    int arr[] = {5, 9, 2, 7, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted array is: ");
    printArray(arr, size);
    bubble_sort(arr, size);
    printf("\nSorted array is: ");
    printArray(arr, size);
    return 0;
}