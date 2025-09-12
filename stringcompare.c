#include <stdio.h>
int main()
{
    int i,flag=0;
    char s1[30],s2[30];
    printf("Enter the first string:");
    scanf("%s",s1);
    printf("Enter the second string:");
    scanf("%s",s2);
    for(i=0;s1[i] != '\0' || s2[i] != '\0';i++)
    {
       if(s1[i] != s2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Strings are not equal");
    }
    else
    {
        printf("Strings are equal");
    }
    

    return 0;
}
