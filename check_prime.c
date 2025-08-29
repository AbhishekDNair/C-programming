#include <stdio.h>

int main()
{
    int i,j,n,isprime=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("the given number is not prime");
        return 0;
    }
    
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==1)
    {
      printf("the number is prime");
    }
    else
    {
        printf("the number is not prime");   
    }
    
    
    return 0;
}
