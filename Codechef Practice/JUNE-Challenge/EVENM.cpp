#include<iostream>

using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    for(int i =0;i<repeat;i++){
        int size;
        cin>>size;
        int arr[size][size];
        // Mr,c + Mr+a,c+a is even
        // Mr,c+a +Mr+a,c is even
        int count1 =1;
        int count2 = 2;
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                if((j+k)%2 == 0){
                    arr[j][k] = count1;
                    count1 += 2;
                }
                else{
                    arr[j][k] = count2;
                    count2 += 2;
                }
            }
        }
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                cout<<arr[j][k]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}