def selection_sort(arr):
  for i in range(len(arr)):
    min_index = i
    #finding the minimum element 
    for j in range(i+1, len(arr)):
      if arr[j] < arr[min_index]:
       min_index = j
    #swapping
    arr[i], arr[min_index] = arr[min_index], arr[i]
  return arr
print(selection_sort([10, 7, 8, 9, 1, 5]))