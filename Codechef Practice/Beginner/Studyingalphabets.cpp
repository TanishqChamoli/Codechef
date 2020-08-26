#include<iostream>
#include<bits/stdc++.h>
#include <set>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    string inp[n];
    for(int i=0;i<n;i++){
        cin>>inp[i];
    }
    set<char> good;
    for(char i:s){
        good.insert(i);
    }
    for(int i=0;i<n;i++){
        int len = inp[i].length();
        int count =0;
        for(char ch: inp[i]){
            if(good.count(ch) > 0)
                count++;
        }
        if(count == len)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}