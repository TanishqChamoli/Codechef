#include<iostream>

using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    int arr[repeat];
    for(int i =0;i<repeat;i++){
        cin>>arr[i];
    }
    for(int i =0;i<repeat;i++){
        if(arr[i] >= 10)
            cout<<"-1\n";
        else
            cout<<"What an obedient servant you are!\n";
    }
    return 0;
}