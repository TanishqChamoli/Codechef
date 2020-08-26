#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double h,c,t;
        int count = 5;
        cin>>h>>c>>t;
        if(h > 50 && c < 0.7 && t > 5600)
            count +=5;
        else if(h > 50 && c <0.7)
            count +=4;
        else if(c < 0.7 && t > 5600)
            count+=3;
        else if(h >50 && t > 5600)
            count +=2;
        else if(h > 50 || c <0.7 || t > 5600)
            count +=1;
        cout<<count<<"\n";
    }
    return 0;
}