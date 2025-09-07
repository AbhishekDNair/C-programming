#include <stdio.h>
int main()
{
    int i,count=0;
    char str[50];
    printf("Enter a string:");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    puts(str);
    printf("%d",count);
    return 0;
}
