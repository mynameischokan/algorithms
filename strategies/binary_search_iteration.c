#include <stdio.h>

/*  There are two method of search:
 *      linear
 *      binary => follows `divide and conquer` strategy
 *             => list must be already sorted (prerequisite)
 *             => need two index pointers
 *             => mid = [(l + h) / 2]
 */


//  Complete the function below using Binary Search iterative method
int BinarySearch(int A[], int n, int key) {
    /*  A: array of int elements
        n: length of given array
        key: element to be searched

        returns: int index of element in array
    */
}


//  What is the worst and best cases of function above?


int main()
{
    int A[] = {1, 2, 3, 4, 13, 24, 27, 31};
    int A_len = sizeof(A)/sizeof(A[0]);
    int res = BinarySearch(A, A_len, 5);
    printf("%d", res);
}