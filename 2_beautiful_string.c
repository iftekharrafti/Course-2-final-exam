
#include<stdio.h>
#include<string.h>

int main()
{
  char str[51];
  int length,i,j,k,count1=0,count2=0,count3=0,difference;
  scanf("%s",str);
  length=strlen(str);
  for(i=0;i<length;i++)
  {
    if(str[i]=='a')
    {
      count1=count1+1; 
    }
  } 
  if(count1>(length/2))
  {
    printf("%d",length);
  }
  else
  {
    for(j=0;j<length;j++)
    {
      if(str[j]!='a')
      {
        count2=count2+1;
      }
    }
    for(k=0;k<length;k++)
    {
      if(str[k]=='a')
      {
        count3=count3+1;
      }
    }
    difference=count2-count3; //4-3=1
    printf("%d",length-(difference+1)); 
  }
  return 0;
}









/*
#include<stdio.h>
#include<string.h>

int main(){
    char str[51];
    scanf("%s", &str);

    int len = strlen(str);
    int count_a = 0;
    for(int i=0; i<len; i++) {
        if(str[i] == 'a'){
            count_a++;
        }
    }
    int other = len - count_a;
    if(other > count_a){
        int diff = other - count_a;
        count_a = count_a + diff + 1;
        printf("%d\n", count_a);
    }
    else{
        printf("%d\n", count_a);
    }
    return 0;
}
*/