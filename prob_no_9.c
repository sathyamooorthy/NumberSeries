/10 22 46 94 190 /

#include <stdio.h>
#include<math.h>

int main()
{
    int n=10;
    printf("%d ",n);
    for(int i=1;i<10;i++)
    {
       n = n+( 6 *(pow(2, i)));
       printf("%d ",n);
    }
}
