#include<stdio.h>
struct class
{
   int regno ;
   char name[30];
   char branch[30];
   float cgpa;
};
void main()
{
    struct class rep[10],temp;
    printf("enter the details of the student");
    for (int i=0;i<10;i++)
    {
        scanf("%d%s%s%f",&rep[i].regno,rep[i].name,rep[i].branch,&rep[i].cgpa);
    }
    void search (struct class a[]);
    search(rep);   
    void arrange (struct class b[],struct class k);
    arrange(rep,temp);
}

void search (struct class a[])
{
    int k,l;
    printf("enter the registration no. of thr student : ");
    scanf("%d",&k);
    for(int i=0;i<10;i++)
    {
        if(k==a[i].regno)
        {
          l=i;
          break; 
        }
    }
    printf("\n\nthe details of the student are :");
    printf("\nREGISTRATION NO.:%d\nNAME:%s\nBRANCH:%s\nCGPA:%f",a[l].regno,a[l].name,a[l].branch,a[l].cgpa);
}
void arrange (struct class b[],struct class k)
{
    for(int i=0;i<10;i++)
    {
      for(int j=i+1;j<10;j++){
      if(b[i].regno>b[j].regno)
      {
         k=b[i];
         b[i]=b[j];
         b[j]=k;
      }
      }
    }
    printf("\n\nthe orderd details are : ");
    for(int i=0;i<10;i++)
    {
         printf("\nREGISTRATION NO.:%d\nNAME:%s\nBRANCH:%s\nCGPA:%f",b[i].regno,b[i].name,b[i].branch,b[i].cgpa);
    }

}

