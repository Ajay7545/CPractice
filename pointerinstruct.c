#include<stdio.h>

struct date
{
    int d;
    int m;
    int y;
};

struct student
{
    int eno;
    char name[20];
    int cgpa;
    struct date dob;
};
void input(struct student *p,int x);
void output(struct student *p,int x);

int main()
{
  int i,n;
  printf("enter no of entries u want to enter");
  scanf("%d",&n);
  struct student s[n];

  input(s,n);
  output(s,n);
}

void input(struct student *p,int x)
{
    int i;
    for(i=0;i<x;i++)
    {
        printf("enter student eno ");
        scanf("%d",&(p+i)->eno);
        fflush(stdin);
        printf("enter student name ");
        gets((p+i)->name);
        fflush(stdin);
        printf("enter student cgpa ");
        scanf("%d",&(p+i)->cgpa);
        fflush(stdin);
        printf("enter student dob day month year ");
        scanf("%d%d%d",&(p+i)->dob.d,&(p+i)->dob.m,&(p+i)->dob.y);
    }
}
void output(struct student *p,int x)
{
    int i;
    for(i=0;i<x;i++)
    {
    printf("%d\n",(p+i)->eno);
    printf("%s\n",(p+i)->name);
    printf("%d\n",(p+i)->cgpa);
    printf("The DOB: %d %d %d\n",(p+i)->dob.d,(p+i)->dob.m,(p+i)->dob.y);
    }
}
