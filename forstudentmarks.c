#include<stdio.h>

int main()
{
    float a[5],s=0,per;
    int i;
    printf("Enter Marks of 5 Subjects:");
    for(i=0; i<5; i++)
    {
        
        scanf("%f",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        s=s+a[i];
    }
    printf("Total Marks :%f\n",s);
    per=(s/500)*100;
    printf("Percentage Of Student Is :%f\n",per);

    if(per>75 && per!=35)
    {
        printf("Congralution You Got First Class With Distination");
    }
    else if(per>60 && per!=35)
    {
        printf("Congralution You Got First Class");
    }
    else if(per>35 && per!=35)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}