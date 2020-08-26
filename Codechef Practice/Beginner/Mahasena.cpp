#include<iostream>

using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    int temp;
    int check =0;
    int ans[repeat];
    int lucky =0;
    int unlucky = 0;
    for(int i =0;i<repeat;i++){
        cin>>temp;
        (temp%2 == 0)? lucky++:unlucky++;
    }
    if(lucky>unlucky)
        cout<<"READY FOR BATTLE";
    else
        cout<<"NOT READY";
    cout<<"\n";
    return 0;
}