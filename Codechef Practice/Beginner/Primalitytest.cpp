#include<iostream>

using namespace std;

int is_prime(int value){
    int temp=value;
    for(int i = 2;i<value;i++){
        if(temp%i == 0){
            return 1;
        }
    }
    return 0;
}

int main(){
    int repeat;
    cin>>repeat;
    int arr[repeat];
    for(int i=0;i<repeat;i++){
        cin>>arr[i];
    }
    for(int i=0;i<repeat;i++){
        if(arr[i] == -1){
            cout<<"no";
        }
        else if(is_prime(arr[i]) == 1)
            cout<<"no";
        else
            cout<<"yes";
        cout<<"\n";
    }

    return 0;
}