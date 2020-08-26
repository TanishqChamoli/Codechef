#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        int arr[len];
        for(int i =0;i<len;i++){
            cin>>arr[i];
        }
        int l =len/2;
        int flag = 0;
        // int count =1;
        for(int i=0;i<=l;i++){
            if(arr[i] != arr[len-1-i]){
                cout<<"no\n";
                flag = 1;
                break;
            }
            
            // if(i !=0){
            //     if(arr[i-1] != arr[i] && arr[i-1] != arr[i]+1){
            //         cout<<"no\n";
            //         flag = 1;
            //         break;
            //     }
            // }

                    
        }
        if(flag == 0)
            cout<<"yes\n";
    }

    return 0;
}