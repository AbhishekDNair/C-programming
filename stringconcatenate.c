#include <stdio.h>

int main()
{
    int i=0,j=0,k=0,len1=0,len2=0;
    char s1[30],s2[30];
    printf("Enter the first string:");
    scanf("%s",s1);
    printf("Enter the second string:");
    scanf("%s",s2);
    while(s1[j]!='\0')
    {
        len1++;
        j++;
    }
    
    while(s2[k]!='\0')
    {
        len2++;
        k++;
    }
    for(i=0;i<=len2;i++)
    {
        s1[len1+i]=s2[i];
    }
    printf("Concatenated string:%s",s1);

    return 0;
}
