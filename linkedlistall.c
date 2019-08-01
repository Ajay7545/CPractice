#include <stdio.h>
#include <string.h>

struct node
{
    int info;
    struct node* next;
};
struct node* START=NULL;

void insert()
{
 struct node *temp,*t;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("emter value for node info");
 scanf("%d",&(temp->info));
 temp->next=NULL;
 if(START==NULL)
 {
     START=temp;
     START->next=NULL;
 }
 else
 {
    t=START;
     while(t->next!=NULL)
      {t=t->next;}
   t->next=temp;
 }
}

void del()
{   struct node* d;
    if(START==NULL)
        printf("LINKED LIST IS EMPTY DELETION IS NOT POSSIBLE\n");
    else
    {
        d=START;
        START=START->next;
        free(d);
    }
}

void display()
{
    struct node *t;
    if(START==NULL)
      printf("LIST IS EMPTY\n");
    else
    {
        t=START;
        while(t!=NULL)
        {
            printf("%d\t",t->info);
            t=t->next;
        }
    }
}

int main()
{   int c;
    lo:
    printf("ENTER 1 for Insert\nENTER 2 for Delete\nEnter 3 for Display\n");
    scanf("%d",&c);
    switch(c)
  {

    case 1:
        insert();
        goto lo;
        break;
    case 2:
        del();
        goto lo;
        break;
    case 3:
        display();
        goto lo;
        break;
    case 4:
        exit(0);
    default:
        printf("Try Again\n");
  }

}
