#include<stdio.h>

int main()
{
    int x,i,s=1;
    printf("Enter the Number :");
    scanf("%d",&x);

    for(i=1; i<=x; i++)
    {
        s=s*i;
    }
    printf("Factorial Number is %d",s);
    return 0;
}