#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int sides[4];
        for(int i=0;i<4;i++){
            cin>>sides[i];
        }
        sort(sides,sides+4);
        if(sides[0] == sides[1] && sides[2] == sides[3]){
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }

    return 0;
}