/*
In C programming, a struct (or structure) is a collection of variables (can be of different types) under a single name. Before create structure variables, we need to define its data type. To define a struct, the struct keyword is used.        Syntax:                         struct structureName {
  dataType member1;
  dataType member2;
  ...
};
*/

#include<stdio.h>

struct Student{
    int roll;
    int class;
    int marks;
};

int main(){
    int n;
    scanf("%d",&n);

    struct Student total = {.marks = 0};
    for(int i=0; i<n; i++){
        struct Student a;
        scanf("%d %d %d", &a.roll, &a.class, &a.marks);

        total.marks += a.marks;
    }
    printf("Total marks: %d\n", total.marks);

    return 0;
}