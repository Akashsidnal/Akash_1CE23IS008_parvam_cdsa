/*
   1 2 3 4 5 
     2 3 4 5
       3 4 5
         4 5
           5
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
     for( j=0;j>i;j--)
     printf("%d ",j);
     printf("\n");
    }
    return 0;
}