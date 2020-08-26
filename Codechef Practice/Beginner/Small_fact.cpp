#include<iostream>

using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    int ans[repeat];
    int arr[repeat];
    for(int i = 0;i<repeat;i++){
        cin>>arr[i];
    }
    for(int i=0;i<repeat;i++){
        ans[i] = 1;
        for(int j =1;j<=arr[i];j++){
            ans[i] *= j;
        }
    }
    for(int i=0;i<repeat;i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}