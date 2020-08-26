#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    while(repeat--){
        double quant,price;
        double d = 0,ans;
        cin>>quant>>price;
        if(quant > 1000){
            d = price*quant*0.1;
        }
        ans = (price*quant) -d;
        printf("%f\n",ans);
    }
    return 0;
}