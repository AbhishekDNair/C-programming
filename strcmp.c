#include <stdio.h>
#include <string.h>
int main()
{   
    int value;
    char s1[30],s2[30];
    printf("Enter the first string:");
    scanf("%s",s1);
    printf("Enter the second string:");
    scanf("%s",s2);
    value = strcmp(s1,s2);
    if(value==0)
    {
        printf("Equal strings");
    }
    else
    {
        printf("Not equal strings");
    }
    return 0;
}
