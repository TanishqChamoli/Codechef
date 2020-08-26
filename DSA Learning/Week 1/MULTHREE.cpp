// Multiple of 3
/*
 Consider a very long K-digit number N with digits d0, d1, ..., dK-1 (in decimal notation; d0 is the most
 significant and dK-1 the least significant digit). This number is so large that we can't give it to you on
 the input explicitly; instead, you are only given its starting digits and a way to construct the remainder
 of the number.

Specifically, you are given d0 and d1; for each i ≥ 2, di is the sum of all preceding (more significant)
digits, modulo 10 — more formally, the following formula must hold:
refer to the image on internet.

Determine if N is a multiple of 3. 

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T
test cases follows.The first and only line of each test case contains three space-separated integers K, d0 and d1.

Output
For each test case, print a single line containing the string "YES" (without quotes) if the number N is a
multiple of 3 or "NO" (without quotes) otherwise.
Constraints

    1 ≤ T ≤ 1000
    2 ≤ K ≤ 1012
    1 ≤ d0 ≤ 9
    0 ≤ d1 ≤ 9

Example

Input:
3
5 3 4
13 8 1
760399384224 5 1

Output:
NO
YES
YES


*/

#include<iostream>
#include<bits/stdc++.h>
#include<stdint.h>

using namespace std;

int main(){
    uint64_t  t;
    cin>>t;
    while(t--){
        uint64_t  no;
        cin>>no;
        // in this the next dig is the sum of all the preceding digits and the modulo 10 of it.
        uint64_t  d0,d1;
        cin>>d0>>d1;
        // in this we will take a route that a number is divisible by 3 if the sum of all digits is divisible
        // by 3
        uint64_t   tmp;
        uint64_t   sum = d0+d1;
        // while(no--){
        //     // tmp = (sum)%10;
        //     sum +=(sum)%10; 
        // }
        sum = (no*(sum))%10;
        cout<<sum<<"\n";
        if(sum%3 == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}