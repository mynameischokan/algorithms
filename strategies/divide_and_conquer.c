/*
* `Divide and Conquer` strategy
*
* Rules:
*       - `sub problems` of a problem must be same as `main problem`.
*          eg. if main problem is `sorting` sub problem must be also `sorting`
*       - you have to be able to combine solutions that were came from sub problems
*
* Algorithm:
*       DAC(P) {
*         if(small(P)) {
*             S(P)
*         }; else {
*             divide P into P1, P2, P3, ... , Pk
*             Apply DAC(P1), DAC(P2), DAC(P3), ... , DAC(Pk)
*             Combine DAC(P1), DAC(P2), DAC(P3), ... , DAC(Pk)
*         };
*       };
*
* Problems involved:
*       1. Binary Search
*       2. Finding Maximum and Minimum
*       3. MergeSort
*       4. QuickSort
*       5. Strassen's Matrix Multiplication
*
*/


