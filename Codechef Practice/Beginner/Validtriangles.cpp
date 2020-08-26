#include<iostream>

using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    int sum[repeat];
    int a1,a2,a3;
    for(int i=0;i<repeat;i++){
        cin>>a1>>a2>>a3;
        sum[i] = a1 + a2 + a3;
    }
    for(int i=0;i<repeat;i++){
        if(sum[i] == 180)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<"\n";
    }
    return 0;
}