
function merge(arr, low, mid, high){
   let i, j, k;
   let b = new Array(100);
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
function mergeSort(arr, low, high ){
    if(low >= high){
        return;
    }
    let mid = low+parseInt((high-low)/2);
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}
let arr = [9, 5, 8, 3, 6, 7, 4, 2, 7, 1];
console.log("Unsorted array is: ",arr);
mergeSort(arr, 0, arr.length-1);
console.log("Sorted array is: ",arr);

