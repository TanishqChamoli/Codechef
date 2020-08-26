#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long int solve(long long int n,long long int arr[]){
    long long int c[n]={0};
    long long int sum =1;
    c[0] = 1;
    for(long long int i=1;i<n;i++){
        if(arr[i-1] < arr[i])
            c[i] = c[i-1]+1;
        else
            c[i] = 1;
        sum += c[i];
    }
    return sum;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n <= 1)
            cout<<n<<"\n";
        else
            cout<<solve(n,arr)<<"\n";
    }
    return 0;
}