#include<stdio.h>
 int main()
 {
     int i,n=0,j;
     int a[20];

     for(i=0;i<8;i++)
     {
     scanf("%d",&a[i]);
     }
  for(i=0;i<8;i++)
     {for(j=i+1;j<8;j++)
      {   if(a[i]==a[j])
          {n++;}
          if(a[i]==a[j] && j<i)
           {break;}
      }

      printf("%d ",a[i]);
      printf("%d\n",n);
      n=0;
      }


}
