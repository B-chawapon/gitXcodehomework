#include <stdio.h>
    int i,j;
    int det=0;
    int num[3][5];
    int determinant(int a);
int main()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               printf("%d ",num[i][j]);
           }
           printf("\n");
       }
    for(i=0;i<3;i++)
    {
        determinant(det);
    }
    printf("\n%d\n",det);
    return 0;
}
int determinant(int a)
{
    det = det + (num[0][i]*(num[1][(i+1)%3]*num[2][(i+2)%3] - num[1][(i+2)%3]*num[2][(i+1)%3]));
    return det;
}
