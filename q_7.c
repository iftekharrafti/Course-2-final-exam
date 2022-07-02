#include<stdio.h>

int main(){
    int n; 
    scanf("%d",&n);

    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int mul;
    scanf("%d", &mul);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(ar[i] * ar[j] == mul){
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}