#include <stdio.h>



struct player
{
   char name[20];
   int age;
   float avg;
};
void inp(struct player  *po,int m);
int main()
{
   int n;
   scanf("%d",&n);
struct player p[3];

inp( p,3);
}

void inp(struct player *po,int m)
{
    int i;
    for(i=0;i<m;i++)
    {
    printf("enter name");
    scanf("%s",&(po+i)->name);
    printf("enter age");
    scanf("%d",&(po+i)->age);
    printf("enter avg");
    scanf("%f",&(po+i)->avg);
    }
}
