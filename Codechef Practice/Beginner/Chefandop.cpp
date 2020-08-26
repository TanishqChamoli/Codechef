#include<iostream>

using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    long int num1[repeat];
    long int num2[repeat];
    for(int i = 0;i<repeat;i++){
        cin>>num1[i]>>num2[i];
    }
    for(int i = 0;i<repeat;i++){
        if(num1[i] > num2[i])
            cout<<">";
        else if(num1[i] < num2[i])
            cout<<"<";
        else
            cout<<"=";
        cout<<"\n";
    }
    return 0;
}