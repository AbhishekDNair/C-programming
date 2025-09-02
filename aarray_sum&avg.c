#include <stdio.h>

int main()
{
    int i,sum,marks[5];
    float avg;
    printf("Enter the mark of 5 students:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum = sum+marks[i];
    }
    avg=sum/5;
    printf("sum is %d\n",sum);
    printf("Average is %.2f",avg);

    return 0;
}
