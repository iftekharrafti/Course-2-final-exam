/*
The pointer in C language is a variable which stores the address of another variable. This variable can be of type int, char, array, function, or any other pointer. The size of the pointer depends on the architecture. However, in 32-bit architecture the size of a pointer is 2 byte.The pointer in c language can be declared using * (asterisk symbol). It is also known as indirection pointer used to dereference a pointer. example: int *a;//pointer to int  
char *c;//pointer to char
*/

#include<stdio.h>

struct Fun{
    int sum;
};

int main(){
    struct Fun *new, new1;
    new = &new1;

    printf("Enter any number: ");
    scanf("%d", &new->sum);

    printf("Sum: %d\n", new->sum);
    return 0;
}