#include<stdio.h>

//1 elec
//2 oil
struct car {
    int speed;
    int pow;
    int wheels;

}test;
struct tesla {
    
    struct car te[3]={{185,1,4},{165,1,4 },{200,1,4 }};
    
}te1car;
struct toyota {
    struct car to[3]={{100,2,4},{80,2,4},{120,2,4}};
}tocar;
struct ducati {
    struct car du[3]={{200,2,2},{180,2,2},{250,2,2}};
}ducar;
struct wave {
    struct car wa[3]={{80,2,2},{60,2,2},{40,2,2}};
}wacar;


struct checkstat
{
    int check=0;
}teslac,toyatac,ducarc,wavec;

void find();
void answer();
int main()
{
   
    scanf("%d %d %d",&test.speed,&test.pow,&test.wheels);
    find();
    answer();
    return 0;
}
void find()
{
    for(int i=0;i<3;i++)
    {
        if((test.wheels==te1car.te[i].wheels)&&(test.wheels==tocar.to[i].wheels))
        {
           if(test.pow==1)
           {
               if(test.speed   <= te1car.te[i].speed){
               teslac.check+=1;
               }
               
           }
           else{
               if(test.speed<=tocar.to[i].speed){
               toyatac.check+=1;
                }
           }
        }
        
        if((test.wheels==ducar.du[i].wheels)&&(test.wheels==wacar.wa[i].wheels))
        {
            if(test.pow==2)
            {
           if((test.speed<=ducar.du[i].speed))  //200 180 250    80 60 40
           {
               if((test.speed>wacar.wa[i].speed)) 
               {
                       ducarc.check+=1;
               }
                else
                {
               ducarc.check+=1;
               wavec.check+=1;
                }
           }
            }
          
           
            
            
        }
    }
}
void answer()
{
    if(teslac.check!=0 || toyatac.check!=0 ){
    if(teslac.check>= toyatac.check)
    {
        if (teslac.check== toyatac.check) {
            printf("Tesla or Toyota\n");
        }
        else{
            printf("Tesla\n");
        }
    }
    else{
        printf("Toyota\n");
    }
    }
    
    if(ducarc.check!=0 || wavec.check!=0 ){
    if(ducarc.check>=wavec.check)
    {
        if (ducarc.check==wavec.check) {
            printf("Ducati or Wave\n");
        }
        else{
            printf("Ducati\n");
        }
    }
    else{
        printf("Wave\n");
    }
    }
    
    if(wavec.check==0 &&ducarc.check==0 && teslac.check==0 &&toyatac.check==0)
    {
        printf("what is a car?\n");
    }
    
    
}
