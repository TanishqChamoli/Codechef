#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        int ans[n]={0};      
        for(int i=0;i<n;i++){
            if(s - arr[i] >= 0){
                ans[i] = 1;
                s -=arr[i];
            }
            if(s == 0)
                break;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i];
        }
        cout<<"\n";
    }
    return 0;
}