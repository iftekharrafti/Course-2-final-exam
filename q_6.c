#include<stdio.h>

void change_values(int n, int *ar, int l, int r){
    for(int i=l;  i<=r; i++){
        ar[i] = 0;
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }

    int l,r;
    scanf("%d %d",&l,&r);   // l and r er man input neya

    change_values(n, ar, l, r);     // l to r 0 function
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}