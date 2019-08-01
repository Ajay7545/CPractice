#include<stdio.h>

int main()
{   int n;
    scanf("%d",&n);
    int i,round,temp,a[n];
for(i=0;i<n;i++)
{ scanf("%d",&a[i]);}


    for(round=1;round<n;round++)
   {
    for(i=0;i<n-round;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
   }

for(i=0;i<n;i++)
{ printf("%d ",a[i]);}

}
