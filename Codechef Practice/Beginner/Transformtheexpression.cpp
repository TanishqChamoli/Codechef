#include<iostream>
#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int pop_all(char arr[],int top){
    while(arr[top] != '('){
        cout<<arr[top];
        top--;
    }
    top--;
    return top;
}

int push_check(char ch,char arr[],int top){
    if(top == -1){
        top++;
        arr[top] = ch;
        return top;
    }
    else if(ch == '*' || ch == '/' || ch == '%'){
        char c = arr[top];
        // int flag =1;
        while(1){
            if(c == '*' || c == '/' || c == '%'){
                cout<<arr[top];
                top--;
                // push_check(ch,arr,top);
            }
            else{
                top++;
                arr[top] = ch;
                return top;
            }
        }
    }
    else if(ch == '+'|| ch == '-'){
        char c =arr[top];
        while(1){
            if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%'){
                cout<<arr[top];
                top--;
                // push_check(ch,arr,top);
            }
            else{
                top++;
                arr[top] = ch;
                return top;
            }
        }
    }
    else if(ch == '^'){
        top++;
        arr[top] = ch;
        return top;
    }
    else if(ch == '('){
        top++;
        arr[top] = ch;
        return top;
    }
}

void solve(string s){
    int len = s.length();
    char arr[len+1];
    int top =-1;
    for(int i=0;i<len+1;i++){
        if(s[i] == ')'){
            top = pop_all(arr,top);
        }
        else if(s[i] >= 97 && s[i] <= 122){
            cout<<s[i];
        }
        else{
            top = push_check(s[i],arr,top);
        }
    }
    while(arr[top] == '(' && top ==0){
        cout<<arr[top];
        top--;
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string inp;
        cin>>inp;
        solve(inp);
    }
    return 0;
}