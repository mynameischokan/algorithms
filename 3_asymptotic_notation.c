/*
 * Representing bounds of a function
 * Asymptotic notations used:
 *      O   |   big-oh  |   upper bound
 *      Ω   |   big-omega  |   lower bound
 *      Θ   |   theta  |   average bound
 */


/* Big-oh def:
 *      The function `f(n) = O(g(n))` if and only there
 *      exists `+`(positive) constants `C` and `n0`,
 *      Such that `f(n) <= C * g(n)` for all `n >= n0`
*/

// TODO
// Solve function f(n) = 2n + 3. So that it can be: O(n), O(n^2)


// TODO
// What are the `upper` bounds of f(n) used above?
// What are the `lower` bounds of f(n) used above?


/* Big-omega def:
 *      The function `f(n) = Ω(g(n))` if and only there
 *      exists `+`(positive) constants `C` and `n0`,
 *      Such that `f(n) >= C * g(n)` for all `n >= n0`
*/


/* Big-theta def:
 *      The function `f(n) = Θ(g(n))` if and only there
 *      exists `+`(positive) constants `C1`, `C2` and `n0`,
 *      Such that `C1 * g(n) <= f(n) >= C2 * g(n)`
*/

// TODO
// Solve function f(n) = 2n + 3, and find it's theta time class function



// Given a function:
//      f(n) = 2n^2 + 3n +4

// TODO
// Solve for g(n) so that f(n) <= O(g(n^2)).
// Solve for g(n) so that f(n) >= Ω(g(n^2)).


// Given a function:
//      f(n) = n^2logn + n

// TODO
// Solve for g(n) so that f(n) <= O(g(n^2logn)).
// Solve for g(n) so that f(n) >= Ω(g(n^2logn)).
// Solve for g(n) so that f(n) >= Θ(g(n^2logn)).


// The following 2 examples shows the case when you can't find Θ(n)
// Given a function:
//      f(n) = n! = n * (n-1) * (n-2) * (n-3) * ... * 3 * 2 * 1

// TODO
// Prove that lower bound of above function is O(1)
// Prove that upper bound of above function is O(n^n)


//Given a function:
//      f(n) = logn!


// TODO
// Proving is a little bit tricky:
//      for lower bound you'll get: log(0)
//      for lower bound you'll get: log(logn^n)
// Prove that lower bound of above function is O(1)
// Prove that upper bound of above function is O(nlogn)

