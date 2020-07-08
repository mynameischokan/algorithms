#include <stdio.h>

/*  There are two method of search:
 *      linear
 *      binary => follows `divide and conquer` strategy
 *             => list must be already sorted (prerequisite)
 *             => need two index pointers
 *             => mid = [(l + h) / 2]
 */


//  Complete the function below using Binary Search recursive method
int RecursiveBinarySearch(int A[], int l, int h, int key) {
    /*  A: array of int elements
        l: first index of array
        h: last index of array
        key: element to be searched

        returns: int index of element in array
    */
}


//  Define it's RR, and what is it's time complexity?


int main()
{
    int A[] = {1, 2, 3, 4, 13, 24, 27, 31};
    int A_len = sizeof(A)/sizeof(A[0]);
    int result = RecursiveBinarySearch(A, 0, A_len, 4123);
    printf("%d", result);
}