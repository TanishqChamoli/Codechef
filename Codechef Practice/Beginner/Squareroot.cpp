#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n];
    for(int i = 0;i<n;i++){
        int temp;
        cin>>temp;
        x[i] = sqrt(temp);
    }
    for(int i = 0;i<n;i++){
        cout<<x[i]<<"\n";
    }
    return 0;
}