//tito_uyir
#include<stdio.h>

int G[10][10],visited[10],n;

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

int q[20],n,i,j,f=0,r=-1;


void BFS(int v)
{
	
	for(i=0;i<n;i++){
		if(G[v][i] && !visited[i])
	   		q[++r]=i;
	 }
		if(f<=r){
            printf("\n%d",v);
			visited[q[f]]=1;
		BFS(q[f++]);
		}
	
}

void main()
{
  int choice;
  printf("Enter number of vertices:");
  scanf("%d",&n);
  
    for(int i=0;i<n;i++){
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
        	printf("Enter the node to start from");
        	scanf("%d",&node);
        	DFS(node);
        	break;
        case 2:reset(visited);
        	printf("Enter the node to start from");
        	scanf("%d",&node);
        	visited[node]=1;
        	BFS(node);
        	break;
        case 0: printf("\nExiting");
        	break;
        
      		}
      }while(choice);
}
