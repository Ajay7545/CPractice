#include<stdio.h>

struct node
{
    int data;
    struct node*left;
    struct node*right;
};

struct node*START;

void create()
{
    struct node *nw,*p;
    nw=(struct node*)malloc(sizeof(struct node));
    printf("enter value for tree: ");
    scanf("%d",&nw->data);
    nw->left=NULL;
    nw->right=NULL;
if(START=NULL)
    {START->data=nw->data;
     START->left=NULL;
     START->right=NULL;
    }
else
{


}


int main()
{

}
