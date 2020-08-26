// Life, the Universe, and Everything 
/*
Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything.
More precisely... rewrite small numbers from input to output.
Stop processing input after reading in the number 42.
All numbers at input are integers of one or two digits.

Input:
1
2
88
42
99

Output:
1
2
88

*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    while(1){
        int temp;
        cin>>temp;
        if(temp == 42)
            break;
        cout<<temp<<"\n";
    }
    return 0;
}



