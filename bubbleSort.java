class bubbleSort {
    void printArray(int arr[]){
       for(int i=0; i<arr.length; i++){
          System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    void bubbleSort(int arr[]){
       for(int i=0; i<arr.length-1; i++){
           for(int j=0; j<arr.length-i-1; j++){
              if(arr[j] > arr[j+1]){
                   int temp = arr[j];
                   arr[j] = arr[j+1];
                   arr[j+1] = temp;
               }
           }
       }
    }
    public static void main(String args[]){
       bubbleSort ob = new bubbleSort();
       int arr[] = {5, 9, 2, 7, 1};
       System.out.print("Unsorted array is: ");
       ob.printArray(arr);
       ob.bubbleSort(arr);
       System.out.print("Sorted array is: ");
       ob.printArray(arr);
    }
} 
