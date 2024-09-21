#include<stdio.h>

int main()
{
    int x;
    printf("Enter The No. :");
    scanf("%d",&x);
    if(x<0)
    {
        printf("No is Negative");
    }
    else if(x>0)
    {
        printf("No is Positive");
    }
    else
    {
        printf("No is Neither Positive Nor Negative");
    }
    return 0;
}