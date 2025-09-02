#include <stdio.h>

int main()
{
    int i,n,a[30];
    printf("Enter the array limit:");
    scanf("%d",&n);
    printf("Enter the elements in the array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("reverse of entered elements are :");
    for(i=n-1;i>=0;i--)
    {
        printf("%d \t ",a[i]);
    }
    
    return 0;
}
