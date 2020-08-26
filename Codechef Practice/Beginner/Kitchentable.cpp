#include<iostream>

using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        long long b[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        for(long long i=0;i<n;i++){
            cin>>b[i];
        }
        long long count = 0;
        long long spent =0;
        for(long long i=0;i<n;i++){
            if(a[i] - spent >= b[i])
                count++;
            spent = a[i];
        }
        cout<<count<<"\n";
    }
    return 0;
}