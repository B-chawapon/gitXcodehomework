
#include<stdio.h>

int main()
{
    int i;
    int numf[3];
    for(i=1;i<=3;i++)
    {
        scanf("%d",&numf[i]);
    }
    printf("%d\n",numf[1]);
    printf("%d",numf[2]);
    printf("%d",numf[3]);
    return 0;
}
