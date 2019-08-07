/6 11 21 36 56 /

#include <stdio.h>
#include<math.h>

int main()
{
    int n = 6 , i;
    printf("%d ",n);
    for(i=5;i<50;i=i+5)
    {
       n = n +i ;
       printf("%d ",n);
    }
}
