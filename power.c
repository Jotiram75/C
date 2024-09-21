#include<stdio.h>

int main()
{
    int x,y,i,s=1;
    printf("Enter the Coefficient:");
    scanf("%d",&x);
    printf("Enter the power:");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        s=s*x;
    }
    printf("Result is %d",s);
    return 0;
}