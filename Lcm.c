#include<stdio.h>

int main()
{
    int i,x,y;
    printf("Enter two Numbers:");
    scanf("%d%d",&x,&y);
    for(i=x>y?x:y;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
        {
            printf("LCM is %d",i);
            break;
        }
    }
    return 0;
}