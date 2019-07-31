#include<iostream>

using namespace std;

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
struct graph* G=new graph();

 cout<<"Enter vertex and edges";
 cin>>G->V;
 cin>>G->E;
 G->adj[G->V][G->V];

 for(u=0;u<G->V;u++)
    for(v=0;v<G->V;v++)
        G->adj[u][v]=0;

cout<<"enter the EDGES index";
for(i=0;i<G->E;i++)
        {
        cin>>u;
        cin>>v;
        G->adj[u][v]=1;
        G->adj[v][u]=1;
        }

return(G);
}

int main()
{   int u,v;
    struct graph * G;

    G=adjmatrix();
    for(u=0;u<G->V;u++)
        for(v=0;v<G->V;v++)
        cout<<G->adj[u][v];
}
