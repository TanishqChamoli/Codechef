#include<iostream>

using namespace std;

int min_notes(int value){
    int arr[] ={100,50,10,5,2,1};
    int len = 6;
    int notes =0;
    int temp1 = value;
    while(temp1 != 0){
        for(int i=0 ;i<=len;i++){
            if(temp1 >= arr[i]){
                temp1 = temp1 - arr[i];
                notes++;
                break;
            }
        }
    }
    return notes;
}

int main(){
    int repeat;
    cin>>repeat;
    int ans[repeat];
    int temp;
    for(int i =0;i<repeat;i++){
        cin>>temp;
        ans[i] = min_notes(temp);
    }
    for(int i =0;i<repeat;i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}