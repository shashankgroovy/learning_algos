def bubblesort(arr):
    """ Implementation of bubble sort. It is an O(n^2) sorting algorithm.
    """
    for i in range(len(arr)):
        for j in range(i ,len(arr)):
            if arr[i] > arr[j]:
                arr[i], arr[j] = arr[j], arr[i]
    return arr

if __name__=='__main__':
    print bubblesort([8, 0, 2, 13, 5, 1, 21, 3, 1])

