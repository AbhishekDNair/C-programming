#include <stdio.h>

int main()
{
    int a,b,c,sum=0;
    printf("Enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    sum = a+b+c;
    float avg;
    avg = sum/3;
    printf("the avererage of three numbers is %.2f",avg);
    return 0;
}
