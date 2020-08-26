#include<stdio.h>
#include<cstring>
#include<strings.h>
void change_money(int x,int money[]){
    if(x == 5)
        money[0] +=1;
    else if(x == 10)
        money[1] +=1;
    else
        money[2] +=1;
}
int return_change(int x,int money[]){
    int change = x-5;
    int temp;
    if(change == 0){
        temp=0;
    }
    else if(change == 5){
        if(money[0] == 0)
            temp=1;
        else{
            money[0] -=1;
            temp=0;
        }
    }
    else if(change == 10){
        if(money[1] == 0 && money[0] < 2)
            temp=1;
        else{
            if(money[1] != 0){
                money[1] -=1;
            }
            else{
                money[0] -=2;
            }
            
            temp=0;
        }
    }
    change_money(x,money);
    return temp;
}

int main(){
    int repeat;
    scanf("%d",&repeat);
    int result[repeat];
    for(int i =0;i<repeat;i++){
        int money[3] = {0,0,0};
        int line;
        int ans;
        scanf("%d",&line);
        int line_arr[line];
        for(int j = 0;j<line;j++){
            scanf("%d",&line_arr[j]);

        }
        for(int j =0;j<line;j++){
            if(j==0 && line_arr[j] != 5 ){
                ans = 1;
                break;
            }
            else{
                ans = return_change(line_arr[j],money);
                if(ans == 1){
                    break;
                }
            }
        }
        result[i] = ans;
    }
    for(int i =0 ;i<repeat;i++){
        if(result[i] == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}