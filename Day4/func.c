#include<stdio.h>
void myfunc();
int main()
{
    printf("Hello world");
    myfunc();
    printf("Hello world2\n");
    myfunc();
    printf("Hello world3\n");
    return 0;
}
void myfunc()
{
static int x=5;
printf("%d\n",x);
x++;
}
