#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    string sol[] = {"Beginner","Junior Developer","Middle Developer","Senior Developer","Hacker","Jeff Dean"};
    while(t--){
        int tmp[5];
        int ans=0;
        for(int i =0;i<5;i++){
            cin>>tmp[i];
            ans+=tmp[i];
        }
        cout<<sol[ans]<<"\n";

    }

    return 0;
}