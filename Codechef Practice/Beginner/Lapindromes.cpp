#include<iostream>
#include<cstring>

using namespace std;

int check_la(char temp[],int oe,int mid,int len){
    int mid2;
    if(oe == 1){
        mid2 = mid+1;
    }
    else{
        mid2 = mid;
    }
    for(int i=0;i<mid;i++){
        int counter=0;
        int check =0;
        int x = 0;
        while(x<mid){
            if(temp[i] == temp[x])
                counter++;
            x++;
        }
        for(int j = mid2;j<=len;j++){
            if(temp[i] == temp[j])
                check++;
        }
        if(check != counter)
            return 1;
    }
    return 0;
}

int main(){
    int repeat;
    cin>>repeat;
    while(repeat--){
        char temp[1000];
        cin>>temp;
        int len = strlen(temp);
        int mid = len/2;
        int flag =0;
        if(len %2 == 0){
            for(int i=0,j=mid;i<mid && j<=len;i++,j++){
                if(temp[i] != temp[j])
                    flag =1;
            }
            if(flag == 1)
                flag = check_la(temp,0,mid,len);
        }
        else{
            for(int i=0,j=mid+1;i<mid && j<=len;i++,j++){
                if(temp[i] != temp[j])
                    flag =1;
            }
            if(flag == 1)
                flag = check_la(temp,1,mid,len);
        }
        if(flag == 0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }

    return 0;
}