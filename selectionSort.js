function selectionSort(arr){
  for(let i=0; i<arr.length-1; i++){
    let min_idx = i;
    for(let j=i+1; j<=arr.length-1; j++){
      if (arr[j] < arr[min_idx]){
        min_idx = j;
           
      }
    }
    let temp = arr[i];
    arr[i] = arr[min_idx];
    arr[min_idx] = temp;
  }
  console.log(arr);
}
let arr = [10, 7, 8, 9, 1, 5];
selectionSort(arr);