#include<stdio.h>
struct student
{
    int rollno ;
    char name[20];
    int age;
};
void main()
{
    struct student pro[5];
    printf("enter the details of each student as rollno,name and age :");
    for(int i=0;i<5;i++)
    {
       scanf("%d%s%d",&pro[i].rollno,&pro[i].name,&pro[i].age);
    }

    printf("roll no.:%d\nname :%s\nage :%d",pro[1].rollno,pro[1].name,pro[1].age);
}