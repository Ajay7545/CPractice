#include<stdio.h>

void isort(int a[],int n);
int main()
{
    int i;
    int a[]={45,89,53,68,48,43,97,9,96,2};
    isort(a,10);

}
void isort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0&&temp<a[j];j--)
            a[j+1]=a[j];
    a[j+1]=temp;
    }
 for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
