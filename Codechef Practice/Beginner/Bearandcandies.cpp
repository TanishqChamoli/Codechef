#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int flag =1;
        int count =1;
        while(flag !=0){
            if(count%2 == 1){
                if(a < count){
                    cout<<"Bob\n";
                    break;
                }
                a -=count;
            }
            else{
                if(b < count){
                    cout<<"Limak\n";
                    break;
                }
                b -=count;
            }
            count++;
        }

    }

    return 0;
}