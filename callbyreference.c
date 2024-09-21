#include<stdio.h>

void call(int *y)
{
    printf("%d",*y);
    *y=10;
    printf("%d",*y);
}
int main()
{
    int x;
    call(&x);
    printf("%d\n",x);
    return 0;
}