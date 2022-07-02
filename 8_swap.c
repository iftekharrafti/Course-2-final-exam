#include<stdio.h>
#include<string.h>

int main(){
    char str[101];
    scanf("%s", &str);

    int len = strlen(str);
    for(int i=0; i<len; i+=2) {
        for(int j= i+2; j<len; j+=2) {
            if(str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    for(int i=0; i<len; i++){
        printf("%c", str[i]);
    }
    return 0;
}