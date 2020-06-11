/*
 * Given a simple function examples below
 * analyze their time complexity
 */

#include <stdio.h>


// Analyze the following functions time complexity.
// So that it's: O(n)
void ex_1_while_loop(int n) {
    int i = 0;
    while (i < n) {
        printf("%d\n", i);
        i++;
    }
}


// TODO
// Implement the above `while loop` in using `for loop`
void ex_1_for_loop(int n) {

}


// Analyze the following functions time complexity.
// So that it's: O(log2b)/O(logn)
void ex_2_while_loop(int b) {
    int a = 1;
    while (a < b) {
        printf("%d\n", a);
        a = a * 2;
    }
}


// TODO
// Implement the above `while loop` in using `for loop`
void ex_2_for_loop(int n) {

}


// Analyze the following functions time complexity.
// So that it's: O(log2n)/O(logn)
void ex_3_while_loop(int n) {
    int i = n;
    while (i>1) {
        printf("%d\n", i);
        i = i / 2;
    }
}


// Analyze the following functions time complexity.
// So that it's APPROXIMATELY: O(√n)
void ex_4_while_loop(int n) {
    int i = 1;
    int k = 1;
    while (k < n) {
        printf("%d\n", k);
        k = k + i;
        i++;
    }
}


// TODO
// Implement the above `while loop` in using `for loop`
void ex_4_for_loop(int n) {
    int k, i;
    for (k=1, i=1; k<n; i++) {
        printf("%d\n", k);
        k = k + i;
    }
}

//  TODO
//  Analyze the following function for:
//      maximum time might be taken for execution, so that it's O(n)
//      minimum time might be taken for execution, so that it's O(1)
void ex_5_while_loop(int m, int n) {
    while(m != n) {
        printf("%d\n", m);
        if(m > n)
            m = m - n;
        else
            n = n- m;
    }
}


//  TODO
//  Implement the above `while loop` in using `for loop`
void ex_5_for_loop(int m, int n) {

}


//  TODO
//  Analyze th following functions `best` and `worst` case of execution time.
//  So that `best` is O(1), `worst` is O(n)
void best_worst_case(int n) {
    if (n < 5) {
        printf("%d\n", n);
    }
    else {
        for (int i=0; i<n; i++) {
            printf("%d\n", i);
        }
    }
}


int main() {

}

