#include<stdio.h>

int main()
{
    int x,y,a,b=0;
    printf("Enter the Number:");
    scanf("%d",&x);
    y=x;
    while(y!=0)
    {
        a=y%10;
        b=b+(a*a*a);
        y=y/10;
    }
    if(x==b)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
    return 0;
}