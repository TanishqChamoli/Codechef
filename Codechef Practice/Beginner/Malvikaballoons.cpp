#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string tmp;
        cin>>tmp;
        int len  = tmp.length();
        int a,b;
        a = b = 0;
        for(int i =0;i<len+1;i++){
            if(tmp[i] == 'a')
                a++;
            else if (tmp[i] == 'b')
                b++;
        }
        int ans = a>b? b: a;
        cout<<ans<<"\n";    
    }
    return 0;
}