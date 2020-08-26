#include<iostream>
// solved using the binary conversion and we could have done this an hour ago so it was preety basic and we can solve it
using namespace std;

int check_pow(int value){
    int i;
    int count =0;
    while(value > 2048){
        value = value-2048;
        count ++;
    }
    int n = value;
    int arr[11] = {0};
    for(i=0; n>0; i++){ 
        if(n%2 == 1)
            count ++;   
        arr[i]=n%2;    
        n= n/2;  
    }
    // cout<<"\n\n";
    // for(int i = 0; i<11;i++){
    //     cout<<arr[i];
    // }
    return count;
    // cout<<"\n\n";
    // int temp = 1;
    // int count= 0;
    // while(temp <= value){
    //     if(temp == value){
    //         if(count < 12)
    //             return 1;
    //         else{
    //             return (count-12+2);
    //         }
    //     }
    //     temp *=2;
    //     count ++;
    // }
    // int arr[] ={1,2,4,8,16,32,64,128,256,512,1024,2048};
    // int len = 11;
    // int menu =0;
    // int temp1 = value;
    // while(temp1 != 0){
    //     for(int i=len ;i>=0;i--){
    //         if(temp1 >= arr[i]){
    //             temp1 = temp1 - arr[i];
    //             menu++;
    //             break;
    //         }
    //     }
    // }
    // return menu;
}

int main(){
    int repeat;
    cin>>repeat;
    int arr[repeat];
    int ans[repeat];
    for(int i=0;i<repeat;i++){
        cin>>arr[i];
        ans[i] = check_pow(arr[i]);
    }

    for(int i = 0;i<repeat;i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}