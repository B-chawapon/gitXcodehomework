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
            printf("Enter speed1 hours mins seconds : ");
            scanf("%d %d %d",&timestat[i].hours,&timestat[i].mins,&timestat[i].seconds);
            printf("Time speed1 is %d:%d:%d\n",timestat[i].hours,timestat[i].mins,timestat[i].seconds);
        }
        else{
            printf("Enter speed2 hours mins seconds : ");
            scanf("%d %d %d",&timestat[i].hours,&timestat[i].mins,&timestat[i].seconds);
            printf("Time speed2 is %d:%d:%d\n",timestat[i].hours,timestat[i].mins,timestat[i].seconds);
        }
        
    }
    finddeltatime(timestat,&diff);
    printf("%d hrs %d mins %d secs\n",(diff.hours),(diff.mins),(diff.seconds));
    
   return 0;
    
}
void finddeltatime(struct time timestat[2],struct time *diff)
{
    struct time totalseconds[2];
    int diftempsec,mintemp,date;
    for(i=0;i<1;i++)
    {
       totalseconds[i].seconds =((((timestat[i].hours*60)+timestat[i].mins)*60)+timestat[i].seconds);
        //printf("\n%d ",totalseconds[i].seconds);
        totalseconds[i+1].seconds =((((timestat[i+1].hours*60)+timestat[i+1].mins)*60)+timestat[i+1].seconds);
        //printf(" %d\n",totalseconds[i+1].seconds);
        
        diftempsec=totalseconds[i].seconds-totalseconds[i+1].seconds;
        //printf("\n%d ",diftempsec);
        if(diftempsec<0)
        {
            diftempsec=diftempsec*-1;
            mintemp=diftempsec/60;
            diff->seconds = (diftempsec%60);
            diff->mins = (mintemp%60);
            if((mintemp/60)>23)
            {
                date=(mintemp/60)/24;
                printf("%d Day(s) with ",date);
                diff->hours=(mintemp/60)%24;
            }
        }
        else
        {
            mintemp=diftempsec/60;
            diff->seconds = (diftempsec%60);
            diff->mins = (mintemp%60);
            if((mintemp/60)>23)
            {
                date=(mintemp/60)/24;
                printf("%d Day(s) with ",date);
                diff->hours=(mintemp/60)%24;
            }
        }
        
        
    }
}
