#include<stdio.h>

int main()
{
    int d,a,b,c,e,f;
    printf("Enter the number:");
    scanf("%d",&d);

    a=d%10;
    b=d/10;
    c=b%10;
    e=b/10;

    f=(a*a*a)+(c*c*c)+(e*e*e);
    if(f==d)
    {
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not Armstrong");
    }
    return 0;
}