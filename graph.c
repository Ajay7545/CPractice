#include<stdio.h>


struct graph
{
    int V;
    int E;
    int **adj;
};

struct graph* adjmatrix()
{
 int u,v;
 int i;
struct graph* G=(struct graph *)malloc(sizeof(struct graph));

 printf("Enter vertex and edges");
 scanf("%d %d",&G->V,&G->E);

 G->adj=malloc(sizeof(int)*(G->V*G->V));

 for(u=0;u<G->V;u++)
    for(v=0;v<G->V;v++)
        G->adj[u][v]=0;

printf("enter the EDGES u v indices");
for(i=0;i<G->E;i++)
        {
        scanf("%d %d",&u,&v);
        G->adj[u][v]=1;
        G->adj[v][u]=1;
        }

return(G);
}
/*
int main()
{   int u,v;
struct graph* G;
    struct graph* K=adjmatrix();
    for(u=0;u<G->V;u++)
        for(v=0;v<G->V;v++)
        printf("%d",K->adj[u][v]);
}
*/
