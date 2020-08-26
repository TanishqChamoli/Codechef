#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int f1,f2,f3;
        cin>>f1>>f2;
        int flag =1;
        f3 = 1;
        int sum;
        int i;
        while(flag !=0){
            sum= f1+f2+f3;
            i =0;
            for(i=2;i<sum;i++){
                if(sum%i == 0){
                    break;
                }
            }
            if(i == sum)
                flag = 0;
            else
                f3++;
        }
        cout<<f3<<"\n";
    }

    return 0;
}