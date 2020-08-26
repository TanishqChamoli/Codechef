#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int v = 1;
        int count = 2;
        while(1){
            v += count;
            if(v > x)
                break;
            // cout<<"  "<<v<<"  "<<count;
            count++;
        }
        cout<<(count-1)<<"\n";
    }
    return 0;
}