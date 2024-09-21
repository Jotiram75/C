#include<stdio.h>

int main()
{
    int x,r,y,s=0;
    printf("Enter the number:");
    scanf("%d",&x);
    y=x;
    while(x!=0)
    {
        r=x%10;
        s=(s*10)+r;
        x=x/10;

    }
    if(s==y)
    printf("Number is palindrome");
    else
    printf("Number is not palindrome");
    //printf("Reverse is %d",s);
    return 0;
}