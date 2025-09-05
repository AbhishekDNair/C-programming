#include <stdio.h>

int main()
{
    int i,j,k,row1,row2,col1,col2,a[10][10],b[10][10],result[10][10],sum;
    printf("Enter the number of rows of matrix 1:");
    scanf("%d",&row1);
    printf("Enter the number of cols om matirx 1:");
    scanf("%d",&col1);
    printf("Enter the number of rows of matrix 2:");
    scanf("%d",&row2);
    printf("Enter the number of cols om matirx 2:");
    scanf("%d",&col2);
    if(col1==row2)
    {
        printf("Enter elements of first matirx:");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter elements of second matirx:");
        for(i=0;i<row2;i++)
        {
            for(j=0;j<col2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    }
    else
    {
        printf("matrix multiplication not possible\n");
        return 0;
    }
    
    printf("MATRIX 1:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("MATRIX 2:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
        
        
    printf("MATRIX MULTIPLICATION:\n");
    for(i=0;i<row1;i++)
    {   
        for(j=0;j<col2;j++)
        {
            sum=0;
            for(k=0;k<col1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
        result[i][j]=sum;
        }
    }
    for(i=0;i<row1;i++)
    {
            for(j=0;j<col2;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
