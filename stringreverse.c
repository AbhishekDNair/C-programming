#include <stdio.h>

int main()
{
    int i=0,j,length=0;
    char str[30],temp;
    printf("Enter a string:");
    scanf("%[^\n]",str);
    while(str[i]!='\0')
    {
        length+=1;
        i++;
    }
    for(j=0;j<length/2;j++)
    {
        temp=str[j];
        str[j]=str[length-1-j];
        str[length-1-j]=temp;
    }
    printf("Reversed string:%s",str);
    return 0;
}
