#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float r;
        cin>>r;
        int x[3],y[3];
        for(int i=0;i<3;i++){
            cin>>x[i]>>y[i];
        }
        float dist[3];
        int flag =0;
        for(int i=0;i<2;i++){
            int j = i+1;
            dist[i] = sqrt(((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j])));
        }
        dist[2] = sqrt(((x[0]-x[2])*(x[0]-x[2]))+((y[0]-y[2])*(y[0]-y[2])));
        if(dist[2] <= r)
            flag =0;
        else if(dist[2] > r)
            if(dist[0] <=r && dist[1] <= r)
                flag = 0;
            else
                flag =1;
        else 
            flag =1;
        if(flag == 0)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}