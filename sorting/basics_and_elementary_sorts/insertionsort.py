def insertionsort(arr):
    """ Implementation of insertion sort. It is an O(n^2) sorting algorithm.
    """
    for i in range(len(arr)):
        temp = arr[i]
        j = i-1
        while temp < arr[j] and j>=0:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = temp
    return arr

if __name__=='__main__':
    print insertionsort([8, 0, 2, 13, 5, 1, 21, 3, 1])


