public class selectionSort {
      void printArray(int arr[]){
       for(int i=0; i<arr.length; i++){
          System.out.print(arr[i] + " ");
         }
         System.out.println();
      }
    void selectionSort(int arr[]){
      for(int i=0; i<arr.length-1; i++){
         int min_idx = i;
         for(int j=i+1; j<=arr.length-1; j++){
            if(arr[j] < arr[min_idx])
               min_idx = j;
         }
         int temp = arr[min_idx];
         arr[min_idx] = arr[i];
         arr[i] = temp;
      }
   }
   public static void main(String args[]){
     selectionSort ob = new selectionSort();
     int arr[] = {5, 9, 2, 7, 1};
     System.out.print("Unsorted array is: ");
     ob.printArray(arr);
     ob.selectionSort(arr);
     System.out.print("Sorted array is: ");
     ob.printArray(arr);
   }
} 
