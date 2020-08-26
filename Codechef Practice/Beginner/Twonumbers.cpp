#include<iostream>
#include<bits/stdc++.h>
#include<stdint.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int64_t a,b,n;
        cin>>a>>b>>n;
        for(int64_t i=0;i<n;i++){
            if(i%2 == 0)
                a *=2;
            else
                b*=2;
        }
        int64_t max;
        int64_t min;
        max = a > b?a:b;
        min = a > b?b:a;
        cout<<max/min<<"\n";

    }

    return 0;
}