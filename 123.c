#include <stdio.h>
#include <string.h>

struct node *START=NULL;

struct node *create()
{
 struct node *ks;
 ks =(struct node *)malloc(sizeof(struct node));
 return ks;
}

void insertnode()
{
    struct node *temp,*t;
    temp=create();
    printf("enter value");
    scanf("%d",&temp->l);
    temp->list=NULL;
if(START==NULL)
    START=temp;
else
{
    t=temp;
    while(t->list!=NULL)
        t=t->list;
    t->list=temp;
}
}

void display()
{
    struct node * o;
    if(START==NULL)
    printf("link is empty");
    else
    o=START;
    while(o!=NULL)
    {printf("%d",o->l);
    o=o->list;
    }
}
void del()
{
    struct node *r;
    if(START==NULL)
        printf("deletion is not possible");
    else
    {r=START;
    START=START->list;
    free(r);
    }

}

int main()
{
    int c;
    printf("enter 1 for insert 2 for delete 3 for display");
    switch(c)
    po:
    case 1: insertnode();
            break;
    case 2: del();
            break;
    case 3: display();
            break;
    default:printf("u have enter wrong plz try again");
            goto(po);
}
