#include<stdio.h>

int main()
{
    int x,r,s=0;
    printf("Enter the number:");
    scanf("%d",&x);

    while(x!=0)
    {
        r=x%10;
        s=(s*10)+r;
        x=x/10;

    }
    printf("Reverse is %d",s);
    return 0;
}