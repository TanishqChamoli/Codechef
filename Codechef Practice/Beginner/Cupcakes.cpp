#include<iostream>

using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    long int arr[repeat];
    for(int i = 0;i < repeat ; i++){
        cin>>arr[i];
    }
    for(int i =0;i<repeat;i++){
        cout<<(arr[i]/2)+1<<"\n";
    }
    return 0;
}