#include<stdio.h>

int main(){
    int n,k;
    scanf("%d", &n);
    scanf("%d", &k);

    int sum = 0;
    int mul = 1;
    for(int i=1; i<=n; i++){
        int inner_mul = mul * 2;
        int baki = inner_mul - mul;
        if(baki > k){
            sum += k;
            mul += k;
        }
        else{
            sum = mul * 2;
            mul *= 2;
        }
    }
    printf("%d\n", sum);
    return 0;
}