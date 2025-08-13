int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("The number %d is an even number",number);
    }
    else
    {
        printf("The number %d is an odd number",number);
    }
    return 0;
}
