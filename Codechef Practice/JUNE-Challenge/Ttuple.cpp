#include<iostream>

using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    while(repeat --){
        int inp[3];
        int goal[3];
        int add;
        int sub[3];
        for(int i = 0 ; i< 3 ;i++){
            cin>>inp[i];
        }
        for(int i = 0 ; i< 3 ;i++){
            cin>>goal[i];
        }
        for(int i= 0 ; i< 3 ;i++){
            sub[i] = goal[i] - inp[i];
        }
        add = sub[0];
        for(int i = 0 ; i< 3 ;i++){
            if(add > sub[i]){
                add = sub[i];
            }
        }
        cout<<add<<"\n";

        

    }
    // int goal[3];
    // int inp[3];
    // int temp[3]={0};
    // int min;
    // for(int j = 0;j<repeat;j++){
    //      for(int i = 0;i<3;i++){
    //         cin>>inp[i];
    //     }
    //     for(int i = 0;i<3;i++){
    //         cin>>goal[i];
    //     }
        
    //     for(int i=0;i<3;i++){
    //         temp[i] = goal[i] - inp[i];
    //     }
    //     for(int i = 0; i<3;i++){
    //         if( min > temp[i])
    //             min = temp[i];
    //     }
    //     min  = temp[0];
    //     // for(int i = 0; i<3;i++){
    //     //     if(temp[i]%min == 0 && temp[i] > 0)

    //     // }
    //     cout<<"\n"<<min<<"\n";
    // }

    return 0; 
}