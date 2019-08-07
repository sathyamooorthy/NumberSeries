#include <stdio.h>
int main()
{
    int n,a=2,i;
    scanf("%d",&n);
    printf("%d ",n);
    for(i=1;i<10;i++)
    {
       if(i%2!=0)
       {
           n=n*a;
       }
       else
       {
           n=n+a;
       }
       a=a+2;
       printf("%d ",n);
    }
}
