#include <stdio.h>

int main()
{
    int n = 2 , i;
    printf("%d ",n);
    for(i=2;i<10;i++)
    {
       n = pow(i, 3) +i ;
       printf("%d ",n);
    }
}
