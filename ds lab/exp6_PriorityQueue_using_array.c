#include <stdio.h>
#include <stdlib.h>
 
#define MAX 100
 
void insert_by_priority(int, int);
void delete_by_priority(int);
void create();
void check(int, int);
void display_pqueue();
 
struct prior{
    int Data;
    int Prio;
};

int front, rear, size;
struct prior pri_que[MAX];
void main()
{
    int n, ch, priority;
    printf("\nEnter the size of Queue (MAX 100) : ");
     scanf("%d",&size);
    
    printf("\n1 - Insert an element into queue");
    printf("\n2 - Delete an element from queue");
    printf("\n3 - Display queue elements");
    printf("\n4 - Exit");
 
    create();
 
    while (1)
    {
        printf("\nEnter your choice : ");    
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1: 
            printf("\nEnter value to be inserted : ");
            scanf("%d",&n);
            printf("\nEnter the priority of the value to be inserted : ");
            scanf("%d",&priority);
            insert_by_priority(n,priority);
            break;
        case 2:
            n=pri_que[front].Data;
            delete_by_priority(n);
            break;
        case 3: 
            display_pqueue();
            break;
        case 4: 
            exit(0);
        default: 
            printf("\nChoice is incorrect, Enter a correct choice");
        }
    }
}
 
/* Function to create an empty priority queue */
void create()
{
    front = rear = -1;
}
 
/* Function to insert value into priority queue */
void insert_by_priority(int data, int p)
{
    if (rear >= size - 1)
    {
        printf("\nQueue overflow no more elements can be inserted");
        return;
    }
    if ((front == -1) && (rear == -1))
    {
        front++;
        rear++;
        pri_que[rear].Data = data;
        pri_que[rear].Prio = p;
        return;
    }    
    else
        check(data,p);
    rear++;
}
 
/* Function to check priority and place element */
void check(int data, int p)
{
    int i,j;
    for (i = 0; i <= rear; i++)
    {
        if (p >= pri_que[i].Prio)
        {
            for (j = rear + 1; j > i; j--)
            {
                pri_que[j].Data = pri_que[j - 1].Data;
                pri_que[j].Prio = pri_que[j - 1].Prio;
            }
            pri_que[i].Data = data;
            pri_que[i].Prio = p;
            return;
        }
    }
    pri_que[i].Data = data;
    pri_que[i].Prio = p;
}
 
/* Function to delete an element from queue */
void delete_by_priority(int data)
{
    int i;
    if ((front==-1) && (rear==-1))
    {
        printf("\nQueue is empty no elements to delete");
        return;
    }
    for (i = 0; i <= rear; i++)
    {
        if (data == pri_que[i].Data)
        {
            for (; i < rear; i++)
            {
                pri_que[i].Data = pri_que[i + 1].Data;
            }
        pri_que[i].Data = -99;
        rear--;
        if (rear == -1) 
            front = -1;
        printf("\nElement has been deleted...");
        return;
        }
    }
}
 
/* Function to display queue elements */
void display_pqueue()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty");
        return;
    }
 
    for (; front <= rear; front++)
    {
        printf(" %d ", pri_que[front].Data);
    }
 
    front = 0;
}