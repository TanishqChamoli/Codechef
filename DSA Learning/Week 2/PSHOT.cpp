#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        string str;
        cin>>str;
        int len = l*2;
        int goal1,goal2;
        int flag =0;
        goal1=goal2=0;
        for(int i=0;i<len;i++){
            if(i%2 == 0 && str[i] == '1')
                goal1++;
            if(i%2 != 0 && str[i] == '1')
                goal2++;
            if(i%2 != 0){
                if(goal1  == l-1 && goal2 <l-2){
                    cout<<i+1;
                    flag= 1;
                    break;
                }
                if(goal2  == l-1 && goal1 <l-2){
                    cout<<i+1;
                    flag=1;
                    break;
                }
            }
            // cout<<goal1<<"<- Goal1 Goal2 -> "<<goal2<<"\n";
        }
        if(flag == 0)
            cout<<len;
    }
    return 0;
}