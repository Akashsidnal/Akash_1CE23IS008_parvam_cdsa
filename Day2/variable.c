#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number a");
    scanf("%d",&a);
    printf("enter the number b");
    scanf("%d",&b);
    if (b%a==0)
    printf("the number is divisible ");

    else
    printf("the number is not divisible ");
    return 0;
}