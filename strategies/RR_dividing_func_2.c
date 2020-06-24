/*
 * Write a function that takes `int` as input and if it
 * is greater than `1` and prints `n` for `n` times
 * Then calls itself by `n/2`.
 *
 * Analyse it's time complexity, so that it is class function of `n`.
 */


#include <stdio.h>


// Recurrence Relation Dividing Function
void RRDividingF(int n)
{

};

// TODO
// What is the RR of function above in terms of T(n)?


/*
 *  RECURRENCE RELATION
 *****************************
 *            1                  n=1
 *    T(n) =
 *            T(n/2) + n         n>1
 *****************************
 */

//  INFO
//  T(n) = n + n/2 + n/2^2 + n/2^3 + ... +  + n/2^k
//       = n[1 + 1/2 + 1/2^2 + 1/2^3 + ... + 1/2^k]
//       = n SIGMA 1/2^i      where i takes values from 0(zero) to k
//           SIGMA 1/2^i = 1 (REMEMBER)
//       = n * 1
//       = n

//  Info above is explainable by circle

int main()
{

}
