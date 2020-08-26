#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        string tmp;
        cin>>tmp;
        char arr[num];
        for(int i=0; i<num; i++){
            arr[i]= tmp[i];
        }
        int flag1 =0;
        int flag2 =0;
        for(int i=0;i<num;i++){
            if(arr[i] == 'I'){
                flag1 = 1;
                break;
            }
            else if(arr[i] == 'Y'){
                flag2 =1;
                break;
            }
        }
        if(flag1 == 1 )
            cout<<"INDIAN\n";
        else if(flag2 == 1)
            cout<<"NOT INDIAN\n";
        else
            cout<<"NOT SURE\n";
    }
    return 0;
}