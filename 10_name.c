#include<stdio.h>
#include<string.h>

struct Family
{
    char name[30];
};
int main()
{
    int val;
    scanf("%d ",&val);
    struct Family name[val];
    for(int i=0;i<val;i++)
    {
        gets(name[i].name);
    }
    int count=0;
    for(int i=0;i<val-1;i++)
    {
      for(int j=i+1;j<val;j++)
      {
          int n=0;
          n = strcmp(name[j].name, name[i].name);
          if(n==0){
            count++;

            break;
          }
      }
    }
    if(count!=0)
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}