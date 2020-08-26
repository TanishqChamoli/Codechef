#include<iostream>
#include<stdint.h>
using namespace std;

int main(){
    int32_t num=1;
    // int flag[100000]={0};
    // int32_t count = 0;
    
    while(1){
        cin>>num;
        if(num == 0)
            break;
        int flag = 0;
        int32_t arr[num];
        for(int32_t i=0;i<num;i++){
            cin>>arr[i];
        }
        for(int i =0;i<num;i++){
             if(arr[i] == i+1){
                flag = 1;
                break;
             }
             else if(arr[arr[i]-1]==i+1){
                flag =1;
                break;
             }
        }
        if(flag == 1){
            cout<<"ambiguous";
        }
        else{
            cout<<"not ambiguous";
        }
        cout<<"\n";
    }  
    // cout<<count;
    return 0;
}