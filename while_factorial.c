#include <stdio.h>

int main()
{
    int i=1,n,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("invalid");
    }
    else
    {
        while(n>0)
    {
        fact=fact*n;
        n=n-1;
    }
    }
    printf("factorial is%d",fact);
    return 0;
}
