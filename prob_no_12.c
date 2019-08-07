#include <stdio.h>
int main()
{
    int n1=3, n2= 4;
    printf("%d %d ",n1,n2);
    for(int i=3;i<14;i++)
    {
        if(i%2==0)
        {
            n2=n2+6;
            printf("%d ",n2);
        }
        else
        {
            n1 = n1+5;
            printf("%d ",n1);
        }
    }
}
