#include<stdio.h>
#include<string.h>

int main(){
    int l,r;
    scanf("%d %d",&l, &r);
    char s[100001];
    scanf("%s", &s);

    int len = strlen(s);
    for(int i=l-1, j=r-1; i<j; i++,j--){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    printf("%s\n", s);
    return 0;
}