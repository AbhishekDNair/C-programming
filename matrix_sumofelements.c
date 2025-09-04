#include <stdio.h>

int main()
{
    int i,j,r,c,a[10][10],sum=0;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of cols:");
    scanf("%d",&c);
    printf("Enter the elememts on the array:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("The sum is %d",sum);
    return 0;
}
