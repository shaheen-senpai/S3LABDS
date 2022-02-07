#include<stdio.h>

void push(int cq[],int *rear,int *front,int size,int data)
{
  if((*front==0 && *rear==size-1) || (*rear==size-1))
    {
      printf("Queue is Full\n rear=%d\n front=%d",*rear,*front);
      return;
    }
 
  else if(*front==-1) /* Insert First Element */
    {
      *front=*rear=0;
      cq[(*rear)]=data;
    }
 
  else 
    {
      *rear=*rear+1;
      cq[(*rear)]=data;
    }
 
}

void pop(int cq[],int *rear,int *front,int size)
{
  if(*front==-1 || (*rear==*front && cq[*front]==0) || cq[*front]==0)
    {
      printf("Queue is Empty\n rear=%d\n front=%d",*rear,*front);
      *front=*rear=-1;
    }
  else
    {
      int data=cq[(*front)];
      cq[(*front)]=0;
      printf("\n%d has been deleted... \n rear=%d\n front=%d",data,*rear,*front);
      *front=*front+1;
      if( (*rear==0 && *front==1) || (cq[*front]==0 && cq[*rear]==0) || *front==size)
        *front=*rear=-1;
      printf("\nafter deletion \n rear=%d\n front=%d",*rear,*front);
    }  
}

void display(int cq[], int rear,int front,int size)
{ 
  if(front==-1 || (rear==front && cq[front]==0) || cq[front]==0)
    {
      printf("Queue is Empty\n rear=%d\n front=%d",rear,front);
      return ;
    }
  for(int i=front;i!=rear;i++)
    printf("%d ",cq[i]);
  printf("%d \n",cq[rear]);  
}
                                                                               // Copyright senpai ; )
void main()
{
  int n;
  printf("Enter the size of the Queue: ");
  scanf("%d",&n);
  int CQ[n],r=-1,f=-1,data=0,flag=1;
  
  for(int i=0;i<n;i++)
    CQ[i]=0;             // To remove garbage values
  
  while(flag)
  {
    printf("  \nMENU  \n 0 :To exit \n 1 :To Display The Elements Of The Queue \n 2 :To POP In The Queue \n 3 :To PUSH In The Queue \n");
    scanf("%d",&flag);
    
    switch(flag)
    {
      case 1:
             display( CQ,r,f,n );
             break;
      case 2:
             pop( CQ,&r,&f,n );
             break;
      case 3:
             printf("Enter the Element to be added : ");
             scanf("%d",&data);  
             push( CQ,&r,&f,n,data );    
             break;
    }
    
  }
  printf("Exiting ....... \n");  
}   
    

