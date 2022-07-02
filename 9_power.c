#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    printf("%d\n",25);
    return 0;
}

/*
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    char str[60];
    long long pow_of_n = 1;
    for(int i=0; i<n; i++){
        pow_of_n *= 5;
    }
    // printf("%lld", pow_of_n);

    int vagsesh = pow_of_n % 10;
    str[1] = vagsesh + '0';
    pow_of_n /= 10;

    vagsesh = pow_of_n % 10;
    str[0] = vagsesh + '0';
    str[2] = '\0';

    printf("%s\n", str);

    return 0;
}
*/