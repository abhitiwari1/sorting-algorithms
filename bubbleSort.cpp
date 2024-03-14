#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void bubble_sort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
           if(arr[j]>arr[j+1]){
             swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {5, 9, 2, 7, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array is: ";
    printArray(arr, size);
    bubble_sort(arr, size);
    cout<<"\nSorted array is: ";
    printArray(arr, size);
    return 0;
}