def bubble_sort(arr):
  for i in range(len(arr)-1):
    for j in range(0, len(arr)-i-1):
      if arr[j] > arr[j+1]:
        swapped = True
        arr[j], arr[j+1] = arr[j+1], arr[j]
  return arr
print(bubble_sort([10, 7, 8, 9, 1, 5]))