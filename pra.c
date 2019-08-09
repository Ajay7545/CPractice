#include <stdio.h>
#include <stdlib.h>

struct stu
{
 char name[20];
 int rno;
};
void inp(struct stu *p,int v);
int main()
{   int i,n;
    scanf("%d",&n);
    struct stu s[n];
inp(s,n);
for(i=0;i<n;i++)
{
    printf("%s",s[i].name);
    printf("%d",s[i].rno);
}
}

void inp(struct stu *p,int v)
{   int i;
    printf("Enter a name and and rno");
    for(i=0;i<v;i++)
    {
    scanf("%s",&(p+i)->name);
    scanf("%d",&(p+i)->rno);
    }
}
