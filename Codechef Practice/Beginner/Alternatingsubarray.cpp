#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long int  t;
    cin>>t;
    while(t--){
        long int  n;
        cin>>n;
        long int  arr[n];
        long int  ans[n] = {0};
        for(long int  i=0;i<n;i++){
            int x;
			cin >> x;
            if(x > 0)
                arr[i] = 1;
            else
                arr[i] = 0;
        }
        ans[n-1] = 1;
        for(int i =n-2;i>=0;i--){
                if(arr[i] != arr[i+1])
                    ans[i]=ans[i+1]+1;
                else{
                    ans[i] = 1;
                }
            }
        for(long int  i=0;i<n;i++){
            if(i != 0)
				cout<< " ";
			cout<<ans[i];
        }
        cout<<"\n";
    }
    return 0;
}