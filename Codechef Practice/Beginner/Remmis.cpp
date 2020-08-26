#include<iostream>

using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    long int max[repeat]={0};
    long int min[repeat]={0};
    for(int i=0;i<repeat;i++){
        long int p1,p2;
        cin>>p1>>p2;
        if(p1 > p2)
            min[i] = p1;
        else
            min[i] = p2;
        max[i] = p1+p2;
    }
    for(int i=0;i<repeat;i++){
        cout<<min[i]<<" "<<max[i]<<"\n";
    }
    return 0;
}