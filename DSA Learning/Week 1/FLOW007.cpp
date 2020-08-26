// Reverse The Number
/*
Input
The first line contains an integer T, total number of testcases.
Then follow T lines, each line contains an integer N. 

Output
Display the reverse of the given number N.

Input
4
12345
31203
2123
2300

Output
54321
30213
3212
32
*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int tmp;
        cin>>tmp;
        int ans =0;
        while(tmp != 0){
            ans = ans*10 +tmp%10;
            tmp /=10;
        }
        cout<<ans<<"\n";
    }
    return 0;
}





