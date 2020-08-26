#include<stdio.h>
#include<strings.h>
int main(){
    int repeat;
    scanf("%d",&repeat);
    int  pairs[repeat];
    for(int i = 0; i< repeat;i++){
        // printf("%d",pairs[i]);
        pairs[i] = 0;
    }
    for(int i = 0;i<repeat;i++){
        char str[100];
        scanf("%s",str);
        
        for(int j = 0;j<strlen(str)-1;j++){
            if(str[j] != str[j+1]){
                pairs[i] += 1;
                j++;
            }
        }
    }
    
    for(int i=0;i< repeat;i++){
        printf("%d\n",pairs[i]);
    }
    return 0;
}