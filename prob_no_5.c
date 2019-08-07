#include <stdio.h>

int main()
{
    int a[10], i;
    printf("Enter first three number");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("the number is\n ");
    for(i=0;i<3;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=3;i<10;i++)
    {
      a[i] = a[i-1]+a[i-2]+a[i-3];
      printf("%d ",a[i]);
    }
}
