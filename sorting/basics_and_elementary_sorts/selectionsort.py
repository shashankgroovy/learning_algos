# filename: selectionsort.py

def selectionsort(arr):
    """sorts a list using selection sort. Its a O(n^2) sorting algorithm.
    """
    for i in range(len(arr)):
        min = i
        for j in range(i , len(arr)):
            if arr[j] < arr[min]:
                min = j
        arr[i], arr[min] = arr[min], arr[i]
    return arr

if __name__=='__main__':
    print selectionsort([8, 0, 2, 13, 5, 1, 21, 3, 1])
