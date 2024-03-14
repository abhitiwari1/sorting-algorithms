public class mergeSort {
    void printArray(int arr[]){
     for(int i=0; i<arr.length; i++){
        System.out.print(arr[i] + " ");
       }
       System.out.println();
    }
    void merge(int arr[], int low, int mid, int high){
        int i, j, k;
        int b[] = new int[100];
    
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
        for(i=low; i<=high; i++){
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
   public static void main(String args[]){
       mergeSort ob = new mergeSort();
       int arr[] = {9, 5, 8, 3, 6, 7, 4, 2, 7, 1};
       System.out.print("Unsorted array is: ");
       ob.printArray(arr);
       ob.mergeSort(arr, 0, arr.length-1);
       System.out.print("Sorted array is: ");
       ob.printArray(arr);
    }
} 

