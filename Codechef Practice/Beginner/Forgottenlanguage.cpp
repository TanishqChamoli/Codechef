#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string dic[n];
        for(int i=0;i<n;i++){
            cin>>dic[i];
        }
        int ans[n] ={0};
        for(int i=0;i<k;i++){
            int l;
            cin>>l;
            string inp[l];
            for(int j=0;j<l;j++){
                cin>>inp[j];
            }
            // for(int j= 0;j<l;j++){
            //     cout<<inp[j]<<"\n";
            // }
            for(int j=0;j<l;j++){
                for(int k =0;k<n;k++){
                    if(inp[j].compare(dic[k]) == 0)
                        ans[k] = 1;
                }
            }
        }
        for(int i= 0;i<n;i++){
                if(ans[i] == 0)
                    cout<<"NO\n";
                else
                    cout<<"YES\n";
        }
    }
    return 0;
}