#include <stdio.h>

int main()
{
    int i,j,n,start;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        start =i%2;
        for(j=0;j<i;j++)
        {
            printf("%d",start);
            start=1-start;
        }
        printf("\n");
    }

    return 0;
}
