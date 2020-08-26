#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define  ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll cats,dogs,legs;
        cin>>cats>>dogs>>legs;
        ll flag= 1;
        ll mc = cats-dogs*2 > 0 ? cats-dogs*2:0 ;

        if(legs%4 == 0){
            for(ll i=(dogs+(mc))*4;i<=(dogs+cats)*4;i+=4){
                if(legs == i ){
                    cout<<"yes\n";
                    flag =0;
                    break;
                }
            }
            if(flag !=0)
                cout<<"no\n";
        }
        else{
            cout<<"no\n";
        }
    }

    return 0;
}