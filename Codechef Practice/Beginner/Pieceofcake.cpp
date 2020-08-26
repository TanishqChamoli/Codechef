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
        char tmp1[len+1];
        char ch[len] ={0};
        if(len %2 != 0){
            cout<<"NO\n";
            continue;
        }
        for(int i=0;i<len+1;i++){
            tmp1[i] = tmp[i];
        }
        sort(tmp1,tmp1+len);
        // cout<<tmp1;
        int inp = 0;
        ch[inp] =tmp[inp];
        for(int i=0;i<len+1;i++){
            if(ch[inp] != tmp1[i]){
                inp++;
                ch[inp] = tmp1[i]; 
            }
        }
        int flag =1;
        for(int i =0;i<len+1;i++){
            if(ch[i] == '0')
                break;
            else if(count(tmp1,tmp1+len,ch[i]) == len/2){
                cout<<"YES\n";
                flag =0;
                break;
            }
        }
        if(flag !=0){
            cout<<"NO\n";
        }

    }
    return 0;
}
/*
This was my first logic then i thought to that there must be a function for counting and then found the above 
answer!
string tmp1;
        char tmp[100];
        cin>>tmp1;
        int len = tmp1.length();
        for(int i= 0;i<len+1;i++){
            tmp[i] = tmp1[i]; 
        }
        if(len%2 != 0){
            cout<<"NO\n";
            continue;
        }
        // char arr[len];
        sort(tmp,tmp+len);
        int max=0;
        int check =0;
        
        for(int i =0;i<len+1;i++){
            if(tmp[check]==tmp[i]){
                // cout<<tmp[i];
                max +=1;
            }
            else{
                if(max  == len/2){
                    cout<<"YES\n";
                    check = -1;
                    break;
                }
                else{
                    check+=i;
                    max = 1;    
                }
            }
        }
        if(check != -1)
            cout<<"NO\n";
*/