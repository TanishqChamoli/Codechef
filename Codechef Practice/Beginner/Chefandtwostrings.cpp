#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char tmp1[1000];
        char tmp2[1000];
        cin>>tmp1;
        cin>>tmp2;
        int max =0,min=0;
        int len = strlen(tmp1);
        for(int i=0;i<len+1;i++){
            if(tmp1[i] == '?' || tmp2[i] == '?')
                max++;
            else
                if(tmp1[i]!=tmp2[i]){
                    max++;
                    min++;
                }
        }
        cout<<min<<" "<<max<<"\n";
    }
    return 0;
}