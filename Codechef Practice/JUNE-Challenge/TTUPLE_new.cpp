#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int goal[3];
        int inp[3];
        for(int i = 0;i < 3 ;i++){
            cin>>inp[i];
        }
        for(int i = 0;i < 3 ;i++){
            cin>>goal[i];
        }
        // check for multiplication
        // logic is to find the number to multply for the first and second if that is same then for third
        // again check and if same then and then only multplu else go for the addtion and then return back
        // only if needed!!
        int sub[3];
        for(int i=0;i<3;i++){
            sub[i] = goal[i] - inp[i];
        }
        int steps[3] = {0};
        int flag =0;
        while(flag != 3)
        for(int i=0;i<3;i++){
            if(sub[i]!=0){
                if(sub[i]%inp[i] == 0){
                    inp[i] = inp[i]*(goal[i]/inp[i]);
                    steps[i] +=1;
                }
                else if(sub[i]%inp[i] > 0){
                    inp[i]=inp[i]+(sub[i]%inp[i]);
                    steps[i] +=1;
                }
            }
            for(int i=0;i<3;i++){
                sub[i] = goal[i] - inp[i];
            }
            flag =0;
            for(int j=0;j<3;j++){
                if(inp[j] == goal[j])
                    flag++;
            }
        }
        sort(steps,steps+3);
        for(int i=0;i<3;i++){
            // cout<<i<<" <-pos goalreached->"<<inp[i]<<" in these many steps-> "<<steps[i]<<"\n";
            cout<<steps[2];
        }

        // check for addtion
    }
    return 0;
}