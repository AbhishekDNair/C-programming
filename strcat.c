#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30],s2[30];
    printf("Enter the first string:");
    scanf("%s",s1);
    printf("Enter the second string:");
    scanf("%s",s2);
    strcat(s1,s2);
    printf("concatenated string:%s",s1);

    return 0;
}
