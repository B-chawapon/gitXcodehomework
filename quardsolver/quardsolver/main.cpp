#include<stdio.h>
#include <math.h>
void quadratic_solver(int a,int b,int c);
double boom(double temp);
double temp;
float ans1,ans2;

int main()
{
    int a,b,c;
    float ans1,ans2;
    printf(" *** Quadratic Solver ***\n");
    printf(" *   ax^2 + bx + c      *\n");
    printf(" ************************\n");
    printf("Enter a b c : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==0){
        printf("a cannot be zero ! ! !\n");
        return 0;;
    }
    quadratic_solver(a,b,c);
    return 0;
}
void quadratic_solver(int a,int b,int c)
{
    temp = (b*b)-(4*(a*c));
  
    if(temp==0)
    {
        ans1 = (-b/(2*a));
        printf("x = %.0f",ans1);
    }
    else{
        if(temp>0)
        {
            ans1= (-b + sqrt(temp))/(2*a) ;
            ans2= (-b - sqrt(temp))/(2*a) ;
            printf("x1 = %.0f\n",ans1);
            printf("x2 = %.0f",ans2);
        }
    }
    
    
    
}
double boom(double temp)
{
    const double eps =0.0001;
    double newvalue =0;
    double oldvalue =temp;
    while (oldvalue!=0.00000000001) {
        newvalue= 0.5*(oldvalue+(temp/oldvalue));
        double check=newvalue;
        /*if(check<0)
        {
            check=check*-1;
        }*/
        if(abs(check)/oldvalue<eps)
        {
            break;
        }
        oldvalue=newvalue;
    }
return newvalue;
}

