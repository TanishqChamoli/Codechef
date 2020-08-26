#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        if(num % 10 == 0)
            cout<<"0\n";
        else if(num %5 == 0)
            cout<<"1\n";
        else
            cout<<"-1\n";
    }
    return 0;
}