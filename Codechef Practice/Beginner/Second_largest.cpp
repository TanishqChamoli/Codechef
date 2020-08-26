#include<iostream>

using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    long int ans[repeat];
    for(int i =0;i<repeat;i++){
        int arr[3];
        long int max = 0;
        long int max2 = 0;
        for(int j=0;j<3;j++){
            cin>>arr[j];
            if(max <arr[j])
                max = arr[j];
        }
        for(int j = 0; j < 3;j++){
            if(max > arr[j] && max2 < arr[j]){
                max2 = arr[j];
            }
        }
        ans[i] = max2;
    }
    for(int i  = 0;i<repeat;i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}