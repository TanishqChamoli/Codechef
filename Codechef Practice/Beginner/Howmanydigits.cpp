#include<iostream>
#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main(){
    string tmp;
    cin>>tmp;
    int len = tmp.length();
    if(len <= 3)
        cout<<len;
    else
        cout<<"More than 3 digits";
    return 0;
}