#include <stdio.h>
int main()
{
    int a,b,c, i;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<5;i++)
    {
        a=a+1;
        b=b+3;
        c=c+3;
       printf("%d\n %d\n %d\n ",a,b,c);
    }
}
