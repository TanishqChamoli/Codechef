#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        int save =n;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(i==j)
                    continue;
                if(arr[i] == arr[j]){
                    save--;
                    break;
                }
            }
        }
        cout<<save<<"\n";

    }

    return 0;
}