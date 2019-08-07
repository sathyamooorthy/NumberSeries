/*1 4 8 11 22 25*/

#include <stdio.h>
int main()
{
    int n=1;
    printf("%d ",n);
    for(int i=2;i<10;i++)
    {
        if(i%2==0)
        {
            n = n + 3;
            printf("%d ",n);
        }
        else
        {
            n = n * 2;
            printf("%d ",n);
        }
    }
}
