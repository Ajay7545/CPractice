#include<stdio.h>


int main()
{
    int t,i,j;
    printf("enter no of row and column in matrix: ");
    scanf("%d",&t);
    int a[t][t];
    for(i=0;i<t;i++)
    {
            for(j=0;j<t;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("enter the no u want search");
    int k;
    scanf("%d",&k);

    for(j=0;j<t;j++)
    { i=0;
     le:   if(a[i][j]>k)
            {printf("element is not present");
        break;}
     else if(a[i][j]<k)
            {
             i++;


            goto le;

            }
        else if(a[i][j]==k)
            {printf("we find the element %d",a[i][0]);
            break;}

    }

}
