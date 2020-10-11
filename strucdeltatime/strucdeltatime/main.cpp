#include<stdio.h>
#include<math.h>

struct time
{
    int hours;
    int mins;
    int seconds;

};
void finddeltatime(struct time timestat[2],struct time *diff);
int i;
int main()
{
    struct time timestat[2],diff ;
    printf("Enter start time\n");
    for(i=0;i<=1;i++)
    {
        if(i==0)
        {
            printf("Enter first hours mins seconds : ");
            scanf("%d %d %d",&timestat[i].hours,&timestat[i].mins,&timestat[i].seconds);
            printf("Time stat 1 is %d:%d:%d\n",timestat[i].hours,timestat[i].mins,timestat[i].seconds);
        }
        else{
            printf("Enter second hours mins seconds : ");
            scanf("%d %d %d",&timestat[i].hours,&timestat[i].mins,&timestat[i].seconds);
            printf("Time stat 2 is %d:%d:%d\n",timestat[i].hours,timestat[i].mins,timestat[i].seconds);
        }
        
    }
    finddeltatime(timestat,&diff);
    printf("%d",(diff.hours));
    printf(":%d",(diff.mins));
    printf(":%d",(diff.seconds));
   
    
    return 0;
    
}
void finddeltatime(struct time timestat[],struct time *diff)
{
    
    while (timestat[1].seconds>timestat[0].seconds) {
        --timestat[0].mins;
        timestat[0].seconds+=60;
    }
    diff->seconds = (timestat[0].seconds-timestat[1].seconds);
    while (timestat[1].mins>timestat[0].mins) {
        --timestat[0].hours;
        timestat[0].mins+=60;
    }
   
    diff->mins = (timestat[0].mins-timestat[1].mins);
    diff->hours = (timestat[0].hours-timestat[1].hours);
   
    //printf("sec %d\n",abs(diff->seconds));
   
   // printf("min %d\n",abs(diff->mins));
   
   // printf("hours %d\n",abs(diff->hours));


}
