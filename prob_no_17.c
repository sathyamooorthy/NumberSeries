#include <stdio.h>
int main()
{
    int n1=6, n2= 10;
    printf("%d %d ",n1,n2);
    for(int i=3;i<14;i++)
    {
        if(i%2==0)
        {
            n2=n2+1;
            printf("%d ",n2);
        }
        else
        {
            n1 = n1+1;
            printf("%d ",n1);
        }
    }
}
