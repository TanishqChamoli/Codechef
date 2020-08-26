// use this library for the easy sorting usinf the function sort(arr{start},arr+n{end})

#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n,sum;
        cin>>n;
        int arr[1000000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<arr[0]+arr[1]<<"\n";
    }
    return 0;
}