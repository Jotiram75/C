#include<stdio.h>

void add()
{
    int x,y,z;
    printf("\nEnter 2 Numbers :");
    scanf("%d %d",&x,&y);
    z=x+y;
    printf("Addition Of Two Numbers: %d",z);
}
void sub()
{
    int x,y,z;
    printf("\nEnter 2 Numbers :");
    scanf("%d %d",&x,&y);
    z=x-y;
    printf("Subtraction Of Two Numbers: %d",z);
}
void mul()
{
    int x,y,z;
    printf("\nEnter 2 Numbers :");
    scanf("%d %d",&x,&y);
    z=x*y;
    printf("Multiplication Of Two Numbers: %d",z);
}

int main()
{
    int ch,x,y,z;
    printf("\nEnter 1 For Addition :");
    printf("\nEnter 2 For Subtraction :");
    printf("\nEnter 3 For Multiplication :");
    printf("\nEnter 4 For Exit :");
    while (1)
    {
    printf("\nEnter Your Choice : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();
        break;
    case 4:
        exit(0);
        break;
    
    default:
        printf("wrong input");
        break;
    }  
    }
    return 0;
}