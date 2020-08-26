#include<stdio.h>
#include<cstring>
#include<strings.h>

int main(){
    int repeat;
    scanf("%d",&repeat);
    int loss[repeat];
    for(int i = 0; i< repeat;i++){
        // printf("%d",pairs[i]);
        loss[i] = 0;
    }
    for(int i=0;i<repeat;i++){
        int len_arr,price_cap;
        scanf("%d %d",&len_arr,&price_cap);
        int sum = 0;
        int final_sum = 0;
        int price_input[len_arr];
        for(int j =0 ;j< len_arr;j++){
            scanf("%d",&price_input[j]);
            sum += price_input[j];
        }
        for(int j =0;j<len_arr;j++){
            if(price_input[j] > price_cap){
                final_sum += price_cap;
            }
            else{
                final_sum += price_input[j];
            }
        }
        loss[i] = sum-final_sum;
        // printf("%d\t",sum);
        // printf("%d",final_sum);

    }
    for(int i = 0;i<repeat;i++){
        printf("%d\n",loss[i]);
    }
    return 0;
}