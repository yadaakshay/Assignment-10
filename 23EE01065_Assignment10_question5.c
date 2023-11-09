#include<stdio.h>
struct bank 
{
  char name[30];
  int accountno;
  int balance;
};

void main()
{
    struct bank data[15];
    printf("enter the customer details :");
    for(int i=0;i<15;i++){
    scanf("%s%d%d",&data[i].name,&data[i].accountno,&data[i].balance);}
    void fun (struct bank a[]);
    fun(data);
    printf("\n");
    void add (struct bank a[]);
    add(data);
    printf("\n");
    void withdraw (struct bank a[]);
    withdraw(data);
}

void fun (struct bank a[])
{
   for(int i=0;i<15;i++)
    {
        if(a[i].balance>50000)
        {
            printf("%s\n",a[i].name);
        }
    }
}

void add(struct bank a[])
{
     for(int i=0;i<15;i++)
    {
        if(a[i].balance>10000)
        {
            a[i].balance=a[i].balance+1000;
            printf("%s balance after increament is %d\n",a[i].name,a[i].balance);
        }
    }
}

void withdraw (struct bank a[])
{
   int k,l,wd;
   printf("enter the account no.:");
   scanf("%d",&k);
   for(int i=0;i<15;i++)
    {
        if(k==a[i].accountno)
        {
           l=i;
           break;
        }
    }
    printf("enter the withdrawal ammount :");
    scanf("%d",&wd);
    a[l].balance=a[l].balance-wd;
    printf("the amount after withdwal in %d is %d",a[l].accountno,a[l].balance);
}