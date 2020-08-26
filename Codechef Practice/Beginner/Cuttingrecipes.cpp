#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    while(repeat--){
        int num;
        cin>>num;
        int sum = 0;
        int ing[num];
        for(int j=0;j<num;j++){
            cin>>ing[j]; 
        }
        if(num>1){
            sort(ing,ing+num);
            int min=ing[0];
            int f =1;
            int check;
            for(int j=2;j<=min;j++){
                check =0;
                for(int k = 0;k<num;k++){
                    if(ing[k]%j == 0)
                        ++check;
                    else
                        continue;
                }
                if(check == num)
                    f = j;

            }
            // cout<<"\n\nAnswer!->";
            for(int j =0;j<num;j++){
                cout<<(ing[j]/f)<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<ing[0]<<"\n";
        }
    
    }
    return 0;
}