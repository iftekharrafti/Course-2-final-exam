#include<stdio.h>
#include<string.h>

int main(){
    char str[1001];
    scanf("%s", str);

    char frq[10] = {0};
    int len = strlen(str);
    for(int i=0; i<len; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            char val = str[i];
            frq[val - '0'] = 1;
        }
    }

    for(int i = 1; i <= 10; i++){
        if(frq[i] == 0){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}