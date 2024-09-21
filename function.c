#include<stdio.h>
 
 int add(int a, int b)
 {
    int c;
    c=a+b;
    return c;
 }
int main(){
    int x,y,p;
    printf("Enter Two numbers :");
    scanf("%d %d",&x,&y);
    p=add(x,y);
    printf("Sum Of two no. :%d",p);
    return 0;
}