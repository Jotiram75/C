#include<stdio.h>

int main()
{
    int i,x,y;
    printf("Enter two Numbers:");
    scanf("%d%d",&x,&y);
    for(i=x<y?x:y;i>0;i--)
    {
        if(x%i==0 && y%i==0)
        {
            printf("GCD/HCF is %d",i);
            break;
        }
    }
    return 0;
}