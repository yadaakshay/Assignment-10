#include<stdio.h>
struct time 
{
  int hours;
  int minutes;
  int sec;
};

int main()
{
    struct time dif[2];
    for(int i=0;i<2;i++)
    {
    printf("enter the time %d in hours,minutes,seconds :",i+1);
    scanf("%d%d%d",&dif[i].hours,&dif[i].minutes,&dif[i].sec);
    }
    void fun(struct time a[]);
    fun(dif);
    return 0;
}

void fun(struct time a[])
{
    int difference;
    int seconds1=a[0].hours*3600+a[0].minutes*60+a[0].sec;
    int seconds2=a[1].hours*3600+a[1].minutes*60+a[1].sec;

    if(seconds1>seconds2)
    {difference=seconds1-seconds2;}
    else
    {difference=seconds2-seconds1;}
    printf("%d",difference);
    int hor=difference/3600;
    int minutes=(difference % 3600)/60;
    int seconds=(difference%3600)%60;
    printf("the difference is %dhours %dminutes %dsec",hor,minutes,seconds);
}