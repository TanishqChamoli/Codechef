#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int l,b;
    cin>>l>>b;
    int ar = l*b;
    int per = 2*(l+b);
    if(ar > per){
        cout<<"Area\n";
        cout<<ar;
    }
    else if(ar < per){
        cout<<"Peri\n";
        cout<<per;
    }
    else{
        cout<<"Eq\n";
        cout<<ar;
    }
    return 0;
}