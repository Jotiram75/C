#include<stdio.h>

int main()
{
    int x,r,s=0;
    printf("Enter the number:");
    scanf("%d",&x);

    while(x!=0)
    {
        r=x%10;
        s=s+r;
        x=x/10;

    }
    printf("Sum is %d",s);
    return 0;
}