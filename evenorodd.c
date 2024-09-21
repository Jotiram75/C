#include<stdio.h>

int main()
{
    int x;
    printf("Enter The No. : ");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("No is Even");
    }
    else
    {
        printf("No is Odd");
    }
    return 0;
}