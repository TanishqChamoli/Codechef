#include<iostream>

using namespace std;
int main(){
    int repeat;
    cin>>repeat;
    int ans[repeat];
    for(int i=0;i<repeat;i++){
        int lines;
        cin>>lines;
        // int temp = lines;
        // int store =0;
        // for(int j = 1;j<=lines;j++){
        //     store +=j; 
        // }
        // int arr[store];
        int arr2[lines][lines] ={0};
        // this for the sotring of the number and the size of the array!
        // cout<<store<<"\n";
        for(int j =0;j<lines;j++){
            for(int k= 0;k<=j;k++){
                cin>>arr2[j][k];
            }
        }
        for(int j = lines-1;j>=1;j--){
            for(int k = 0;k<=j;k++){
                if((arr2[j][k] > arr2[j][k+1]))
                    arr2[j-1][k] += arr2[j][k];
                else
                    arr2[j-1][k] += arr2[j][k+1];
            }
        }
        int max = arr2[0][0];
        ans[i] = max;
    }
    for(int i = 0;i<repeat;i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}