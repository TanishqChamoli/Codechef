// Lapindromes
/*
Lapindrome is defined as a string which when split in the middle,
gives two halves having the same characters and same frequency of each character.
If there are odd number of characters in the string, we ignore the middle character and check for lapindrome.
For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency.
Also, abccab, rotor and xyzxy are a few examples of lapindromes.Note that abbaab is NOT a lapindrome.
The two halves contain the same characters but their frequencies do not match.
Your task is simple. Given a string, you need to tell if it is a lapindrome.

Input:
First line of input contains a single integer T, the number of test cases.
Each test is a single line containing a string S composed of only lowercase English alphabet.

Output:
For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if it is not.

Input:
6
gaga
abcde
rotor
xyzxy
abbaab
ababc

Output:
YES
NO
YES
YES
NO
NO

*/
#include<iostream>
#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string tmp;
        cin>>tmp;
        int len = tmp.length();
        int o,e;
        int flag =1;
        if(len%2 == 0){
            e = len/2;
            char s1[e],s2[e];
            for(int i=0;i<e;i++){
                s1[i] = tmp[i];
                s2[i] = tmp[e+i];
                // cout<<s1[i]<<" "<<s2[i]<<"\n";
            }
            sort(s1,s1+e);
            sort(s2,s2+e);
            for(int i =0;i<e;i++){
                if(s1[i] != s2[i]){
                    flag = 0;
                    cout<<"NO\n";
                    break;
                }
            }
            if(flag == 1){
                cout<<"YES\n";
            }
        }
        else{
            o = (len+1)/2;
            // cout<<o<<"\n";
            char s1[o-1],s2[o-1];
            for(int i=0;i<o-1;i++){
                s1[i] = tmp[i];
                s2[i] = tmp[o+i];
            }
            sort(s1,s1+o-1);
            sort(s2,s2+o-1);
            for(int i=0;i<o-1;i++){
                if(s1[i] != s2[i]){
                    flag = 0;
                    cout<<"NO\n";
                    break;
                }
            }
            if(flag == 1){
                cout<<"YES\n";
            }
        }
    }
    return 0;
}



