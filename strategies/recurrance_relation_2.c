/*
 * Write a function that takes `int` as input and if it
 * is greater than `0` and:
 *                          1. Initializes `int i = 0`, loops till i < n.
 *                             In this loop prints `n`
 *                          2. Then calls itself by `-1`.
 *
 * Analyse it's time complexity.
 */


#include <stdio.h>


void R1(int n)
{
    if (n > 0) {
        for (int i=0; i<n; i++) {
            printf("%d\n", n);
        }
        R1(n - 1);
    }
}

// TODO
// What is the T(n)/recurrence relation of R1 function above?
// Simplify it by applying asymptotic notation


/*
 *  RECURRENCE RELATION
 *****************************
 *            1           n=0
 *    T(n) =
 *            T(n-1)+n    n>0
 *****************************
 */
//  TODO
//  Solve the Reccurence Realtion using `Recursion Tree`
//  What is it's time complexity?


int main()
{

}
