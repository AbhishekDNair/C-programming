#include <stdio.h>

int main()
{
    int i,a[5],b[5],sum[5];
    printf("Enter the elements in the first array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements in the second array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        sum[i]=a[i]+b[i];
        printf("the sum is %d at index %d\n",sum[i],i);
    }
    
    return 0;
}
