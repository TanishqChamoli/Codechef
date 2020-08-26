#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string tmp1,tmp2;
        cin>>tmp1>>tmp2;
        int x=0;
        int len  = tmp1.length();
        for(int i=0;i<len;i++){
            if(tmp1[i] == '?' || tmp2[i] == '?' ||tmp1[i] == tmp2[i])
                x++;
        }
        // cout<<x<<"->"<<len- x<<"\n";
        if((len - x) == 0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}

