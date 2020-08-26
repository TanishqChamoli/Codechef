#include<iostream>

using namespace std;

int gcd(int a,int b){
    int temp;
    while(b!=0){
        temp = a%b;
        a=b;
        b=temp;
    }
    return a;
}

int lcm(int a,int b, int gcd){
    return (a*b)/gcd;
}

int main(){
    int repeat;
    cin>>repeat;
    while(repeat--){
        int num1,num2;
        cin>>num1>>num2;
        int a1= gcd(num1,num2);
        int a2 = lcm(num1,num2,a1);
        cout<<a1<<" "<<a2<<"\n";
    }
    return 0;
}