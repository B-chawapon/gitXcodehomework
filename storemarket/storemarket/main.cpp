#include <stdio.h>
#include <stdlib.h>
float price[3]={10,20,30};
float totalprice=0;
float vat7return;
float yourMoney;
float myMoney;

int stackitem1=0;
int stackitem2=0;
int stackitem3=0;

int want;
int i=0;
int j=1;
int k=0;
float vat7(float temp);
int main()
{
    printf("Insert Your Money ");
    scanf("%f",&yourMoney);
    for( i=0;i!=j;)
    {
        printf("Choose your item ");
        scanf("%d",&want);
        if(want==1 || want==4)
        {
            if(want==1)
            {
                stackitem1+=1;
                totalprice=(vat7(price[0])*stackitem1)+(vat7(price[1]*stackitem2))+(vat7(price[2]*stackitem3));
                printf("(%d) (%d) (%d)\n",stackitem1,stackitem2,stackitem3);
                printf("Current total with Vat 7%% = %f\n",totalprice);
            }
            if(want==4)
            {
                if(stackitem1<=0)
                {
                    stackitem1=0;
                }
                else{
                    stackitem1-=1;
                }
                totalprice=(vat7(price[0])*stackitem1)+(vat7(price[1]*stackitem2))+(vat7(price[2]*stackitem3));
                printf("(%d) (%d) (%d)\n",stackitem1,stackitem2,stackitem3);
                printf("Current total with Vat 7%% = %f\n",totalprice);
            }
        }
        if(want==2|| want==5)
        {
            if(want==2)
            {
                stackitem2+=1;
                totalprice=(vat7(price[0])*stackitem1)+(vat7(price[1]*stackitem2))+(vat7(price[2]*stackitem3));
                printf("(%d) (%d) (%d)\n",stackitem1,stackitem2,stackitem3);
                printf("Current total with Vat 7%% = %f\n",totalprice);
            }
            if(want==5)
            {
                if(stackitem2<=0)
                {
                    stackitem2=0;
                }
                else{
                    stackitem2-=1;
                }
                totalprice=(vat7(price[0])*stackitem1)+(vat7(price[1]*stackitem2))+(vat7(price[2]*stackitem3));
                printf("(%d) (%d) (%d)\n",stackitem1,stackitem2,stackitem3);
                printf("Current total with Vat 7%% = %f\n",totalprice);
            }
        }
        if(want==3|| want==6)
        {
            if(want==3)
            {
                stackitem3+=1;
                totalprice=(vat7(price[0])*stackitem1)+(vat7(price[1]*stackitem2))+(vat7(price[2]*stackitem3));
                printf("(%d) (%d) (%d)\n",stackitem1,stackitem2,stackitem3);
                printf("Current total with Vat 7%% = %f\n",totalprice);
            }
            if(want==6)
            {
                if(stackitem3<=0)
                {
                    stackitem3=0;
                }
                else{
                    stackitem3-=1;
                }
                totalprice=(vat7(price[0])*stackitem1)+(vat7(price[1]*stackitem2))+(vat7(price[2]*stackitem3));
                printf("(%d) (%d) (%d)\n",stackitem1,stackitem2,stackitem3);
                printf("Current total with Vat 7%% = %f\n",totalprice);
            }
        }
        if(want==0)
        {
            break;
        }
       
    }
    //printf("%f\n",totalprice);
    //printf("Total price with Vat 7%% = %f\n",totalprice);
    if(totalprice>yourMoney)
    {
        printf("You haven't enough money\n");
        
    }
    /*else{
        printf("Your Change = %f\n",yourMoney-totalprice);
    }*/
    
       
    
    FILE *fptr;

       if ((fptr = fopen("/Users/b.nut/Desktop/testshop","w")) == NULL)
       {
           printf("Error! opening file");
           exit(1);
       }
       fprintf(fptr,"***************************************\n");
       fprintf(fptr,"*Total price with Vat 7%% = %f\n",totalprice);
    if(totalprice<=yourMoney)
    {
       fprintf(fptr,"*Your Change = %f\n",yourMoney-totalprice);
    }
    else{
        fprintf(fptr,"You haven't enough money\n");
    }
       fprintf(fptr,"***************************************\n");


       fclose(fptr);
   return 0;
}
float vat7(float temp)
{
    vat7return = temp+((temp*7)/100);
    return vat7return;
}
