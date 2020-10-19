#include<stdio.h>

//1 elec
//2 oil
struct car {
    int speed;
    int pow;
    int wheels;

};
struct tesla {
    
    struct car te[3]={{185,1,4},{165,1,4 },{200,1,4 }};
    
};
struct toyota {
    struct car to[3]={{100,2,4},{80,2,4},{120,2,4}};
};
struct ducati {
    struct car du[3]={{200,2,2},{180,2,2},{250,2,2}};
};
struct wave {
    struct car wa[3]={{80,2,2},{60,2,2},{40,2,2}};
};
struct tesla te1car;
struct toyota tocar;
struct ducati ducar;
struct wave wacar;
struct car test;
int checktesla =0;
int checktoyota=0;
int checkducar=0;
int checkwave=0;
void find();
void answer();
int main()
{
   
    scanf("%d %d %d",&test.speed,&test.pow,&test.wheels);
    find();
    printf("%d\n",checktesla);
    printf("%d\n",checktoyota);
    printf("%d\n",checkducar);
    printf("%d\n",checkwave);
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
               checktesla+=1;
               }
               
           }
           else{
               if(test.speed<=tocar.to[i].speed){
               checktoyota+=1;
                }
           }
        }
        
        if((test.wheels==ducar.du[i].wheels)&&(test.wheels==wacar.wa[i].wheels))
        {
           
            if(test.pow==2){
             if(test.speed<=ducar.du[i].speed)
                {
                    if(test.speed>=180)
                    {
                        checkducar+=1;
                    }
                    else
                    {
                        if(test.speed<=wacar.wa[i].speed)
                        {
                            checkwave+=1;
                            checkducar+=1;
                        }
                        else{
                            
                            checkducar+=1;
                        }
                    }
                }
            }
        }
    }
}
void answer()
{
    if(checktesla!=0 || checktoyota!=0 ){
    if(checktesla>=checktoyota)
    {
        if (checktesla==checktoyota) {
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
    
    if(checkducar!=0 || checkwave!=0 ){
    if(checkducar>=checkwave)
    {
        if (checkducar==checkwave) {
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
    
    if(checkwave==0 &&checkducar==0 && checktesla==0 &&checktoyota==0)
    {
        printf("what is a car?\n");
    }
    
    
}
