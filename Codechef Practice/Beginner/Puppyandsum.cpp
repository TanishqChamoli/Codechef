#include<iostream>

using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    while(repeat--){
        int times,dig;
        cin>>times>>dig;
        for(int i=0;i<times;i++){
            int temp = 0;
            for(int j=1;j<=dig;j++){
                temp+=j;
            }
            dig = temp;
        }
        cout<<dig<<"\n";


    }

    return 0;
}