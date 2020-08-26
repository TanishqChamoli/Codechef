#include <iostream>

using namespace std;

int main()
{
    int repeat;
    cin >> repeat;
    for(int i=0;i<repeat;i++){
        int temp;
        cin>>temp;
        int x = temp/2;
        int ans =0;
        for(int j=1;j<x;j++){
            ans+=j;
        }
        cout<<ans<<"\n";
    }
    return 0;
}