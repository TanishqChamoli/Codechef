#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int temp = a-b;
    if(temp < 0)
        temp *=(-1);
    cout<<temp+1;
    return 0;
}