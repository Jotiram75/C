#include<stdio.h>

int main()
{
    int a,*b,**c;
    a=5;
    b=&a;
    c=&b;
    printf("%u %u %u",a,b,c);
    return 0;

}