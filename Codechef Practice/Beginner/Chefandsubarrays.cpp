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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans =n;
        for(int i=0;i<n;i++){
            int value = arr[i];
            int sum = arr[i];
            for(int j=i+1;j<n;j++){
                value *=arr[j];
                sum += arr[j];
                if(sum == value)
                    ans++;
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}