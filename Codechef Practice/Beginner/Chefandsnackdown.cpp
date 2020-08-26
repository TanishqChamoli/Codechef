#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    int arr[] = {2010, 2015, 2016, 2017 ,2019};
    int n =5;
    while(t--){
        int tmp;
        cin>>tmp;
        int flag =0;
        for(int i=0;i<n;i++){
            if(arr[i] == tmp){
                cout<<"HOSTED\n";
                flag =1;
            }
        }
        if(flag != 1)
            cout<<"NOT HOSTED\n";
    }
    return 0;
}