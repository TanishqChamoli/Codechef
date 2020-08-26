#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,b;
        cin>>l>>b;
        int min = l>b ? l:b;
        int gcd= 1;
        for(int i=2;i<=min;i++){
            if(l%i == 0 && b%i == 0){
                gcd = i;
            }
        }
        cout<<(l*b)/(gcd*gcd)<<"\n";
    }
    return 0;
}