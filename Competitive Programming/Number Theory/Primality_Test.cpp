/* To find whether a given number is prime or not */
#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
bool BruteForce(int N){
    if (N==1){
        return false;
    }
    for(int i=2; i<N; i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}

//Primality Test
/*  1) All divisors of a number N occur in pairs of (a,b)s.t a*b=N
    2) For a divisor pair (a,b) one of them lies below sqrt(N) & other
    lies above sqrt(N)
    3) Time Complexity: O(sqrt(N))
*/
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    // Type your code here
    return 0;
}