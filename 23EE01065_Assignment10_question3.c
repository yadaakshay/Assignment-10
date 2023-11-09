#include<stdio.h>
#include<string.h>
struct student
{
  int mark[5];
  char name[30];
};
void main()
{
    struct student std[3];
    printf("enter the name of the student and their marks :");
    for (int j=0;j<3;j++){
    scanf("%s",std[j].name);
    for (int i=0;i<5;i++){
    scanf("%d",&std[j].mark[i]);}}
    int k,l;
    char nam[30];
    printf("enter  the person's name :");
    scanf("%s",nam);
    for(int j=0;j<3;j++)
    {
      k=strcmp(nam,std[j].name);
      if(k==0)
      {
         l=j;
         break;
      }
    }

    int totalmark=0;
    for(int i=0;i<5;i++)
    {
        totalmark=totalmark+std[l].mark[i];
    }
    printf("the total mark of %s is %d",std[l].name,totalmark);
    float average=(totalmark/5);
    printf("\naverage of the marks is %f",average);


}