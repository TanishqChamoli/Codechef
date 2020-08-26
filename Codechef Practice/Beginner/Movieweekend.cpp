#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int L[n],R[n];
        for(int i=0;i<n;i++){
            cin>>L[i];
        }
        for(int i=0;i<n;i++){
            cin>>R[i];
        }
        int ans =0, r=0,pos;
        for(int i=0;i<n;i++){
            if(ans < L[i]*R[i]){
                ans = L[i]*R[i];
                r = R[i];
                pos = i;
            }
            else if(ans == L[i]*R[i]){
                if(r < R[i]){
                    r = R[i];
                    pos =i;
                }
            }
        }
        cout<<pos+1<<"\n";

    }

    return 0;
}