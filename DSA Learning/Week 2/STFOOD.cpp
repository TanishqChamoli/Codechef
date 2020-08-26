// Chef and Street Food

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int max=0;
        while(n--){
            /* 
                Si stores that offer food of the i-th type
                the price of one piece of food of this type is Vi (the same in each of these stores) 
                Pi people come to buy it;
                each of these people wants to buy one piece of food of the i-th type.

                food he'd offer will split equally among all stores that offer it, and if this is impossible,
                i.e. the number of these people p is not divisible by the number of these stores s,
                then only ⌊p/s⌋ people will buy food from Chef.
            */
            int s,p,v;
            cin>>s>>p>>v;
            int profit = v*(p/(s+1));
            if(profit>max)
                max = profit;
        }
        cout<<max<<"\n";

    }
    return 0;
}