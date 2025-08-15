#include <stdio.h>

int main()
{
    int a,b;
    float result;
    char operators;
    printf("Enter two operands:");
    scanf("%d %d",&a,&b);
    getchar();
    printf("Enter the operation to be performed (+,-,*,/):");
    scanf("%c",&operators);
    switch(operators)
    {
        case '+':result = a+b;
                    break;
        case '-':result = a-b;
                    break;
        case '*':result = a*b;
                    break;
        case '/':if(b==0)
                 {
                     printf("Error");
                 }
                 else
                 {
                     result = (float)a/b;
                 }
                    break;
        default :
                printf("Invalid Entry");
                    break;
    }
    printf("Result is %.2f",result);
   
    
    return 0;
}
