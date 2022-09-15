/* To calculate a^N*/
#include <bits/stdc++.h>
using namespace std;

// Brute Force
int BruteForce(int base, int N){
    int res = 1;
    for(int i=0; i<N; i++){
        res *= base;
    }
    return res;
}

// Binary Exponentiation Algorithm
/*  1) Time Complexity: O(log(N))
    Note: Binary Exponentiation can be modified to Modular Exponentiation
    by making following changes: 
        1) res = (res*base)%M
        2) base = (base*base)%M
        where, M is the Modulo Operator which may be taken as per Input
*/
int BinExp(int base, int N){
    int res = 1;
    while(N>0){
        if(N&1){
            res *= base;
        }
        base *= base;
        N >>= 1;
    }
}

int main(){
    // Type your code here
    return 0;
}