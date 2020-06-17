/*
 * Write a function that prints given int if it
 * is greater than 0 and calls itself.
 * Analyse it's time complexity in terms T(n).
 */


#include <stdio.h>


void R1(int n)
{

}


int main()
{

}



/*
 *  RECURRENCE RELATION
 *****************************
 *            1           n=0
 *    T(n) =
 *            T(n-1)+1    n>0
 *****************************
 *
 *  SOLUTION BY SUBSTITUTION METHOD
 **********************************
 *      T(n) = T(n-1)+1
 *      T(n-1) = T(n-2)+1
 *      T(n) = [T(n-2)+1]+1
 *      T(n) = T(n-2)+2
 *      T(n) = [T(n-3)+1]+2
 *      T(n) = T(n-3)+3
 *      T(n) = T(n-k)+k till reach 0(zero)
 *
 *      Assume n-k = 0
 *      Then   n = k
 *
 *      T(n) = T(n-n)+n
 */
