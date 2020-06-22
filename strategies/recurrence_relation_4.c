/*
 * Write a function that takes `int` as input and if it
 * is greater than `0` and prints `n`
 * Then calls itself 2 times by `n-1`.
 *
 * Analyse it's time complexity, so that it is class function of `2^n`.
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
 *            T(n-1)+T(n-1)+1    n>0
 *****************************
 */
//  TODO
//  Solve the Recurrence Relation using `Recursion Tree`
//  so that it will stop at: T(0)

//  INFO
//  Sum of terms GP series
//  a + ar + ar^2 + ar^3 + ar^4 + ... + ar^k = a((r^k+1)-1)/r-1
//  where r: common ration; a: first term

//  What is it's time complexity?


int main()
{

}
