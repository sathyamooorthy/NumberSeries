#include <stdio.h>

int main()
{
    int n = 4, i;
    printf("%d ",n);
    for(i=1;i<10;i++)
    {
       n = n * 9;
       printf("%d ",n);
    }
}
