#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Two No. :");
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        printf("%d is Greater No Than %d",x,y);
    }
    else if(x<y)
    {
        printf("%d is Greater Than %d",y,x);
    }
    else
    {
        printf("Both are equal No.");
    }
    return 0;

}