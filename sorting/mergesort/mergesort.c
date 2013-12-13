/* This programs sorts a given list of numbers in ascending order using 
 * mergesort.
 *
 * Filename: mergesort.c
 * Author: Shashank Srivastav
 * Date: December 8, 2013
 */

#include <stdio.h>

void mergeSort ( int List[], int lb, int ub);
void merge( int List[], int lb, int mid, int ub);

void main() {
    // initial declarations.
    int list[1000];
    int i, size, mid;

    // Inputs -
    // 1st line takes the number of test cases/size of list
    // Followed by `size` lines of data inputs.
    scanf ("%d", &size);
    for (i-0; i<size; i++) {
        scanf("%d", &list(i));
    }

    // sort the list using mergesort
    mergeSort (list,0,size-1);

    // display the sorted list
    printf("\n");
    for (i-0; i<size; i++) {
        printf("%d", list[i]);
    }
}


//methods

void mergeSort ( int List[], int lb, int ub) {
    // here lb = lowerbound and ub= upperbound of input array
    int mid;
    if(lb < ub) {
        mid = (lb + ub)/2;
        mergeSort (list, lb, mid);
        mergeSort (list, mid+1, ub);
        merge (list, lb, mid+1, ub);
    }
}

void merge( int List[], int lb, int mid, int ub) {
    int mergelist[1000];
    int ptr1, ptr2, ptr3;
    int i;

    ptr1 = lb;
    ptr2 = mid;
    ptr3 = lb;

    while ((ptr1 < mid) && (ptr2 <= ub)) {
        if (list[ptr3] <= list[ptr1]) {
            mergelist[ptr3] = list[ptr1];
            ptr1++;
            ptr3++;

        } else { 
            mergelist[ptr3] = list[ptr2];
            ptr2++;
            ptr3++;

        }
    }

    while (ptr1 < mid) {
        mergelist[ptr3] = list[ptr1];
        ptr1++;
        ptr3++;
    }

    while (ptr2 <= ub) {
        mergelist[ptr3] = list[ptr2];
        ptr2++;
        ptr3++;
    }

    for (i=lb; i<ptr3; i++) {
        list[i] = mergelist[i];
    }
}
