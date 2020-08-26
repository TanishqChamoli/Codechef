#include<iostream>

using namespace std;

int main(){
    int num1,num2;
    cin>>num1>>num2;
    int flag = num1>num2?1:0;
    if(flag == 1)
        cout<<num1-num2<<"\n";
    else
        cout<<num1+num2<<"\n";


    return 0;
}