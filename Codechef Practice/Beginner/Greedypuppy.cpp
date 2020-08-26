#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    int l = t;
    while(t--){
        int n,p;
        cin>>n>>p;
        int max = 0;
        for(int i =1;i<=p;i++){
            if(max < (n%i))
                max = n%i;
        }
        cout<<"\n"<<max;
    }
    return 0;
}