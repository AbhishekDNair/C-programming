#include <stdio.h>
#include <string.h>
int main()
{   
    int count;
    char str[30];
    printf("Enter a string:");
    scanf("%s",str);
    count=strlen(str);
    printf("length of the string %s is :%d",str,count);

    return 0;
}
