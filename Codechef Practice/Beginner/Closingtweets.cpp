#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int tweets[n+1]={0};
    // char str[n][1000];
    int count =0;
    for(int i=0;i<k;i++){
        string str;
        cin>>str;
        int num = 0;
        if(str == "CLICK")
            cin>>num;
        
        // int len = str.length()-1;
        // cout<<str.at(len)<<"\n";
        if(num != 0  && tweets[num] == 0){
            tweets[num] = num;
            // cout<<"njnf";
            count ++;
        }
        else if(num != 0 && tweets[num] == num){
            tweets[num] = 0;
            count--;
            // cout<<"n";
        }
        else{
            for(int j=0;j<n+1;j++){
                tweets[j] = 0;
            }
            count =0;
        }
        cout<<count<<"\n";
    }

    return 0;
}