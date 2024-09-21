#include<stdio.h>

int main()
{
    int a,b,c,i,r;
    a=-1;
    b=1;
    printf("Enter The Range :");
    scanf("%d",&r);

    for (i=0; i<r; i++)
    {
       c=a+b;
       printf("%d  ",c);
       a=b;
       b=c;
    }
    
    return 0;
}