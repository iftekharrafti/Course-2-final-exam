#include<stdio.h>

int main(){
    int n = 100;
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            printf("I Love Programming!\n");
        }
        else{
            printf("Goodbye\n");
        }
    }
    return 0;
}