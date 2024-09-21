#include<stdio.h>

struct Student
{
    int roll;
    float per;
    int marks;
    char name[50];
};


int main()
{
    struct Student s1;
    printf("%d",sizeof(s1));

    return 0;
}