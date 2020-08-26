#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        /*
            N, M and K denoting the number of source files in 
            the project, the number of ignored source files and
            the number of tracked source files.
        */
        cin>>n>>m>>k;
        int ignored[m];
        int tracked[k];
        for(int i=0;i<m;i++){
            cin>>ignored[i];
        }
        for(int i=0;i<k;i++){
            cin>>tracked[i];
        }
        int ti=0,uui=0;
        // ti tracked and ignored uui untracted and unignored
        for(int i=0;i<m;i++){
            for(int j=0;j<k;j++){
                if(ignored[i] == tracked[j]){
                    ti++;
                    break;
                }
            }
        }
        int flag =1;
        for(int i =1;i<=n;i++){
            for(int j =0;j<m;j++){
                if(i == ignored[j]){
                    flag =0;
                    break;
                }
            }
            if(flag ==1){
                for(int j=0;j<k;j++){
                    if(i == tracked[j]){
                        flag =0;
                        break;
                    }
                }
            }
            if(flag == 1)
                uui++;
            else
                flag = 1;    
        }
        cout<<ti<<" "<<uui<<"\n";

    }

    return 0;
}