#include<bits/stdc++.h>
#include<iostream>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a;
        cin>>a;
        long long int n[a];
        for(long long int i=0;i<a;i++){
            cin>>n[i];
        }
        sort(n,n+a);
        cout<<n[0]*(a-1)<<"\n";
    }
    return 0; 
}