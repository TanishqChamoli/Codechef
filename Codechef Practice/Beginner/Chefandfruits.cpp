#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int ap,or1,gold;
        cin>>ap>>or1>>gold;
        int temp = ap>or1?1:2;
        int diff;
        if(temp == 1){
            diff = ap-or1;
        }
        else{
            diff = or1-ap;
        }
        int bought = 0;
        int ans =diff;
        for(int i=1;i<=gold;i++){
            if(ans == 0){
                break;
            }
            else if(ans > diff - i){
                ans = diff-i;
                bought ++;
                // cout<<bought;
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}