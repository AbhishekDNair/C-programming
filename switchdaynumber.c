#include <stdio.h>

int main()
{
    int daynumber;
    
    printf(" 1 for Monday \n 2 for Tuesday \n 3 for Wednesday \n 4 for Thursday \n 5 for Friday \n 6 for Saturday \n 7 for Sunday \n");
    printf("Enter the day number");
    scanf("%d",&daynumber);
    switch(daynumber)
    {
        case 1:printf("Monday");
                break;
        case 2:printf("Tuesday");
                break;
        case 3:printf("wednesday");
                break;
        case 4:printf("Thursday");
                break;
        case 5:printf("Friday");
                break;
        case 6:printf("Saturday");
                break;
        case 7:printf("Sunday");
                break;
        default:
                printf("invalid Entry");
    }
    return 0;
}
