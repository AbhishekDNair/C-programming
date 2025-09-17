#include <stdio.h>

int main()
{
    int i;
    char str[30];
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    printf("Lower case:%s",str);

    return 0;
}
