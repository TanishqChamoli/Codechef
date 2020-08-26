#include<iostream>
#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string tmp;
        cin>>tmp;
        int len = tmp.length();
        int zero,one;
        zero=one=0;
        for(int i=0;i<len;i++){
            if(tmp[i] == '0')
                zero++;
            else
                one++;
        }
        // cout<<"zero ->"<<zero<<" one ->"<<one<<"\n";
        if(len ==1){
            cout<<"Yes\n";
        }
        else if(len > 2){
            if((zero == 1 || one == 1) && zero != one){
                    cout<<"Yes\n";
                }
                else
                    cout<<"No\n";
        }
        else{
            if(zero == one)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }

    return 0;
}