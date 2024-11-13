#include<stdio.h>
int main()
{
    int n ,a[100],sum=0,e=0,o=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
      if(a[i]%2==0)
      e+=a[i];
      else
      o+=a[i];
    }
    printf("%d %d",e,o);
    return 0;

}