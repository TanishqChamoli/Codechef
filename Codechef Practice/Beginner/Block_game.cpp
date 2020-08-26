#include<iostream>

using namespace std;

int check(int value){
    int temp=0;
    int num=value;
    while(num!=0){
        temp = temp*10+(num%10);
        num /= 10;
    }
    if(value == temp)
        return 0;
    else
        return 1;
}

int main(){
    int repeat;
    cin>>repeat;
    int num[repeat];
    int temp;
    for(int i =0;i<repeat;i++){
        cin>>num[i];
    }
    for(int i=0;i<repeat;i++){
        if(check(num[i]) == 1)
            cout<<"losses";
        else
            cout<<"wins";
        cout<<"\n";
    }
    return 0;
}