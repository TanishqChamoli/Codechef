#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n1;
        cin>>n1;
        int s1[n1];
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        int n2;
        cin>>n2;
        int s2[n2];
        for(int i= 0;i<n2;i++){
            cin>>s2[i];
        }
        // for(int i= 0;i<n2;i++){
        //     cout<<s2[i];
        // }
        int flag =0;
        for(int i=0,j=0;i<n2,j<n1;j++){
            if(s1[j] == s2[i]){
                i++;
                flag++;
            }

        }
        if(flag == n2){
            cout<<"Yes\n";
            // flag = 0;
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}