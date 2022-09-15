/* To generate all prime numbers in the range of 1 to N */
#include <bits/stdc++.h>
using namespace std;

// N can be any integer given as per Input
#define N 100
int arr[N] = {1};

// Sieve of Eratosthenes Algorithm
/*  Time Complexity: O(Nlog(log(N)))
    Answer Queries: 0(1)
    Extra Space: O(N)
*/
void Sieve(){
    arr[0] = arr[1] = 0;
    for(int i=2; i*i<=N; i++){
        if(arr[i]){
            for(int j=i*i; j<=N; j+=i){
                arr[j] = 0;
            }
        }
    }
}

int main(){
    // Type your code here
    return 0;
}