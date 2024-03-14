#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void selection_sort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int min_idx = i;
        for(int j=i+1; j<size; j++){
           if(arr[j]<arr[min_idx]){
              min_idx = j;
            }
        }
        if(min_idx != i){
            swap(arr[i], arr[min_idx]);
        }
    }
}
int main(){
    int arr[] = {5, 9, 2, 7, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array is: ";
    printArray(arr, size);
    selection_sort(arr, size);
    cout<<"\nSorted array is: ";
    printArray(arr, size);
    return 0;
}