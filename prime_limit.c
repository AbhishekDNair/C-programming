#include <stdio.h>

int main()
{
    int i,j,n,prime;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        prime=1;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==1)
        {
            printf("%d\t",i);
        }
    }

    return 0;
}
