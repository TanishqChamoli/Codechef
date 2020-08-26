#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char str[n];
        for(int i=0;i<n;i++)
            cin>>str[i];
        int r,b,g;
        r=b=g=0;
        for(int i=0;i<n;i++){
            if(str[i] == 'R')
                r++;
            else if(str[i]=='B')
                b++;
            else
                g++;
        }
        // cout<<r<<" "<<b<<" "<<g<<"\n";
        int max;
        if(r >=b){
            if(r >=g)
                max = r;
            else
                max =g;
        }
        else{
            if(b >= g)
                max =b;
            else
                max = g;
        }
        cout<<n-max<<"\n";
        // if(b >= r && b >= g)
        //     cout<<n-b<<"\n";
        // else if(r >= b && r >= g)
        //     cout<<n-b<<"\n";
        // else if(g >= b && g >= r)
        //     cout<<n-b<<"\n";
    }
    return 0;
}