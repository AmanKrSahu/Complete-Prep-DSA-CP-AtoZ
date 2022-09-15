/* To find prime factorisation of a number N */
#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
void BruteForce(int N){
    for(int i=2; i<=N; i++){
        if(N%i==0){
            int cnt = 0;
            while(N%i==0){
                cnt++;
                N/=i;
            }
            cout<<"("<<i<<"^"<<cnt<<")*";
        }
    }
}

// Optimized Approach
/*  1) If N is a composite number then there is at least 1 prime divisor 
    of N below sqrt(N)
    2) Time Complexity: O(sqrt(N))
*/
void primeFact(int N){
    for(int i=2; i*i<=N; i++){
        if(N%i==0){
            int cnt = 0;
            while(N%i==0){
                cnt++;
                N/=i;
            }
            cout<<"("<<i<<"^"<<cnt<<")*";
        }
    }
    if(N>1){
        cout<<"("<<N<<"^"<<1<<")";
    }
}

int main(){
    // Type your code here
    return 0;
}