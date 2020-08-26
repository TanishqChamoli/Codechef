#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        double salary;
        double ans;
        cin>>salary;
        if(salary > 1500)
            ans = salary+500+salary*.98;
        else
            ans = salary*2;
        printf("%.2f\n",ans);
    }


    return 0;
}