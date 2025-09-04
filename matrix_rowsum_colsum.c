#include <stdio.h>

int main()
{
    int i,j,row,cols,a[10][10],rowsum,colsum;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    printf("Enter the number of cols:");
    scanf("%d",&cols);
    printf("Enter the elements in the matrix:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        rowsum=0;colsum=0;
        for(j=0;j<cols;j++)
        {
            rowsum=rowsum+a[i][j];
            colsum=colsum+a[j][i];
        }
        printf("sum of row %d = %d \nsum of col %d = %d\n",i+1,rowsum,i+1,colsum);
    }

    return 0;
}
