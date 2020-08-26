#include<iostream>

using namespace std;

int main(){
    int rounds;
    cin>>rounds;
    int p1[rounds], p2[rounds];
    int lead[rounds];
    int win[rounds];
    int sum1 = 0,sum2 = 0;
    for(int i = 0 ;i < rounds; i++){
        cin>>p1[i];
        cin>>p2[i];
    }
    for(int i = 0;i < rounds; i++){
        sum1 += p1[i];
        sum2 += p2[i];
        lead[i] = (sum1 > sum2)?(sum1 - sum2):(sum2 - sum1);
        win[i] = (sum1 > sum2)?1:2;
        // cout<<sum1<<"  "<<sum2<<"  "<<lead[i]<<"   "<< win[i]<<"\n";
        // sum1 = sum2 =0;
    }
    int max = 0;
    int pos = -1;
    for(int i = 0;i<rounds;i++){
        if(lead[i] > max){
            max = lead[i];
            pos = i;
        }
    }
    if(win[pos] == 1)
        cout<<"1 "<<max;
    else
        cout<<"2 "<<max;

    return 0;
}