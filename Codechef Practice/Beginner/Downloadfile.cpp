#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int T[n],D[n];
        for(int i=0;i<n;i++){
            cin>>T[i]>>D[i];
        }
        int cost =0;
        for(int i=0;i<n;i++){
            if(k>=T[i]){
                k -=T[i];
            }
            else{
                T[i] -=k;
                k=0;
                cost +=(T[i]*D[i]); 
            }
        }
        cout<<cost<<"\n";
    }

    return 0;
}