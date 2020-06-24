/*
 * Write a function that takes `int` as input and if it
 * is greater than `0` and:
 *                          1. Initializes `int i=1`, loops till `i<n` with step `i*2`.
 *                             In this loop prints `n`
 *                          2. Then calls itself by `-1`.
 *
 * Analyse it's time complexity, so that it is class function of `nlogn`.
 */


#include <stdio.h>


void R1(int n)
{

};

// TODO
// What is the T(n)/recurrence relation of R1 function above?
// Analyse it by taking just degree, remove constants


/*
 *  RECURRENCE RELATION
 *****************************
 *            1              n=0
 *    T(n) =
 *            T(n-1)+logn    n>0
 *****************************
 */
//  TODO
//  Solve the Reccurence Realtion using `Recursion Tree`
//  so that it will stop at: T(3), T(2), T(1), T(0)
//  What is it's time complexity?


int main()
{

}
