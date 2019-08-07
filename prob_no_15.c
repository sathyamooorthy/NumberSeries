#include <stdio.h>
int main()
{
    int n1=16;
    printf("%d ",n1);
    for(int i=5;i>=0;i--)
    {
        n1=n1-i;
        printf("%d ",n1);
    }
}
