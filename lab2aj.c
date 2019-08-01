#include <stdio.h>
#include <stdlib.h>

void roundoff(float *p);

int main()
{
float a;
float *p;
printf("enter a float no: ");
scanf("%f",&a);
roundoff(&a);
}
void roundoff(float *p)
{int b;
printf("enter a value upto which u want to roundoff");
scanf("%d",&b);
k=a/10;
printf("the roundoff value is:%f",*p);
}
