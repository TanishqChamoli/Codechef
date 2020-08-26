#include<iostream>
// #include<cstdint>
using namespace std;
unsigned long long  jerry_win(unsigned long long  tom){
    unsigned long long  count = 0;
    // odd case
    if(tom%2 != 0){
        count = tom/2;
        // for(unsigned long long  j=1;j<tom;j++){
        //         if(j%2 == 0)
        //             count +=1;
        //     }
    }
    // even case means redo this with tom/2
    else{
        count = jerry_win(tom/2);
    }
    return count;
}
 main(){
    unsigned long long  repeat;
    cin>>repeat;
    unsigned long long  tom[repeat];
    unsigned long long  jerry[repeat] ={0};
    for(unsigned long long  i=0;i<repeat;i++){
        cin>>tom[i];
    }
    for(unsigned long long  i=0;i<repeat;i++){
        jerry[i] = jerry_win(tom[i]);
    }

    for(unsigned long long  i=0;i<repeat;i++){
        cout<<jerry[i]<<"\n";
    }
        

    return 0;
}