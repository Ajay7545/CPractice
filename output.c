#include <stdio.h>
#include <stdlib.h>

void multmat(int*,int*);
void maxel(int **);
void avgrc(int **);

int main()
{
    int i,j,a[3][3],b[3][3];
     for(i=0;i<3;i++)
        for(j=0;j<3;j++)
      {
          scanf("%d",&a[i][j]);
      }
  for(i=0;i<3;i++)
        for(j=0;j<3;j++)
      {
          scanf("%d",&b[i][j]);
      }
      multmat(&a[0][0],&b[0][0]);
}
void multmat(int*pa,int *pb)
{
    int c[3][3],i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
        // c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
        c[i][j]=*((pa+i)+0) * *((pb+0)+j) + *((pa+i)+1) * *((pb+1)+j) + *((pa+i)+2) * *((pb+2)+j);
        }
    for(i=0;i<3;i++)
       {printf("\n ");
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
       }
 maxel(c);
 avgrc(c);

}
void maxel(int **po)
{   int max=0,i,j;
       for(i=0;i<3;i++)
        {   for(j=0;j<3;j++)
         {
            if( *(*(po+i)+j) > max)
            max = *(*(po+i)+j);
         }
        }
printf("\n%d\n",max);
}
void avgrc(int **l)
{   int d[4][4],i,j;
    for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
        {
            d[i][j]=*((l+i)+j);
        }
       }
 for(i=0;i<3;i++)
       {
            d[i][3]=(*(*(l+i)+0) + *(*(l+i)+1) + *(*(l+i)+2))/3;
            d[3][i]=(*(*(l+0)+i)+ *(*(l+1)+i)+ *(*(l+2)+i))/3;
            d[3][3]=0;
        }
    for(i=0;i<4;i++)
       {    printf("\n");
           for(j=0;j<4;j++)
           {
               printf(" %d ",d[i][j]);
           }
       }
}
