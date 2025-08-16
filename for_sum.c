#include <stdio.h>

int main()
{
    int i,sum=0,num;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d",sum);
    
    return 0;
}
