#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        //no of house occupied by cops is m cp_s is cops speed to search an house per min and y_min is the time in mins they will search for
        int m,speed,time;
        int houses = 100;
        cin>>m>>speed>>time;
        int cp[m];//array of pos in which the cops are
        for(int i=0;i<m;i++){
            cin>>cp[i];
        }
        sort(cp,cp+m);
        int swept = speed*time;
        int arr[houses] = {0};
        int ans=0;
        int min ,max;
        cout<<swept<<"\n";
        for(int i=0;i<m;i++){
            min = (cp[i] - swept) <= 0? 1:(cp[i] - swept);
            max = (cp[i] + swept) > 100?100:(cp[i] + swept);
            for(int j = min-1;j<max;j++){
                arr[j] = 1;
            }
            cout<<"police house->"<<cp[i]<<" min->"<<min<<" max->"<<max<<"\n";

            // while(min!=max){
            //     arr[min-1] = 1;
            //     min++;
            // }
        }
        for(int i=0;i<100;i++){
            if(arr[i] == 0)
                ans++;
        }
        cout<<"ans is->"<<ans<<"\n";
    }
    return 0;
}