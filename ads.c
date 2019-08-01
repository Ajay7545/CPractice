#include<stdio.h>
#include<math.h>
int main()
{int amount,n,m,o;

printf("enter amount: ");
scanf("%d",&amount);
if(amount/100>=1)
{
if (amount<500)
    {
    n=amount/100;
    printf("the min no of notes is %d",n);
    }


    else if (amount<1000)
    {
    m=amount/500 + (amount%500)/100 ;
    printf("the min no of notes is %d",m);

    }


    else if (amount>=1000)
    {
    o=amount/1000+(amount%1000)/500+(amount%500)/100;
    printf("the min no of notes is %d",o);

    }
}
}
