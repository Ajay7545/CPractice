#include<stdio.h>

struct node
{
    int info;
    struct node *link;
};
void insertnode()
{
    struct node *START=NULL;
    struct node *p,*l;
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter value for info");
    scanf("%d",&(p->info));
    p->link=NULL;
    if(START=NULL)
        START=p;
    else
    {
        l=p;
        while(l!=NULL)
        {
            l=l->link;
        }
    }
}
int main()
{
    printf("hiiiiiiiiiii");
    insertnode();
}
