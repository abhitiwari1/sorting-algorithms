def merge(arr, low, mid, high):
    b = [0] * (100)

    i = low
    j = mid+1
    k = low
    while i <= mid and j <= high :
        if arr[i] < arr[j] :
            b[k] = arr[i]
            k+= 1
            i+= 1
        else:
            b[k] = arr[j]
            k+= 1
            j+= 1
    while i <= mid :
        b[k] = arr[i]
        k+= 1
        i+= 1
    while j <= high :
        b[k] = arr[j]
        k+= 1
        j+= 1
    for i in range(low, high+1):
        arr[i] = b[i]
def mergeSort(arr, low, high ):
    if low < high :
        mid = (low+high)//2
        mergeSort(arr, low, mid)
        mergeSort(arr, mid+1, high)
        merge(arr, low, mid, high)
    return arr
arr = [9, 5, 8, 2, 6, 7, 1, 4, 3]
print("Unsorted array is: ", arr, end=" ")
mergeSort(arr, 0, len(arr)-1)
print("\nSorted array is: ", arr, end=" ")
