#include<stdio.h>

int G[10][10],visited[10],n;
int q[20],f=0,r=-1;       //BFS STORING

void reset(int visited[]){
	for(int i=0;i<n;i++)
        visited[i]=0;
}

void DFS(int i)
{
    printf("\n%d",i);
    visited[i]=1;
    for(int j=0;j<n;j++)
        if(!visited[j]&&G[i][j]==1)
            DFS(j);
}

void BFS(int v)
{   
    for(int i=0;i<n;i++)
    {   
	if(G[v][i] && !visited[i])
	  {q[++r]=i;
	   visited[i]=1;}
    }
    if(f<=r+1)
    {
      printf("%d\n",v);
      BFS(q[f++]);
    }	
}

void main()
{
  int choice;
  printf("Enter number of vertices [MAX 10]:");
  scanf("%d",&n);
  printf("Enter the adjacency matrix\n(0-> not present)\n(1-> present):\n");
  
  for(int i=0;i<n;i++)
  printf("  %d",i);
  printf("\n");
  
  for(int i=0;i<n;i++){
   printf("%d ",i);
   for(int j=0;j<n;j++){
       scanf("%d",&G[i][j]);
        }
    }
  /*for(int i=0;i<n;i++){
  	int neigh;
  	printf("Enter the neigbhours of %d:",i);
  	scanf("%d",&neigh);
  	while(neigh!=-1){
  		G[i][neigh]=1;
  		scanf("%d",&neigh);}		
  }*/
  do
    { 
      printf("\n1.DFS\n2.BFS\n0.Exit\nchoice:");
      scanf("%d",&choice);
      int node;
      switch(choice){
        case 1:reset(visited);
        	printf("Enter the node to start from :");
        	scanf("%d",&node);
        	DFS(node);
        	break;
        case 2:reset(visited);
        	printf("Enter the node to start from :");
        	scanf("%d",&node);
        	visited[node]=1;
        	BFS(node);
        	f=0;r=-1;
        	break;
        case 0: printf("\nExiting");
        	break;
        
      		}
      }while(choice);
}
