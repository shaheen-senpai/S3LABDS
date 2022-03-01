//Hash using chaining 

#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

struct node *chain[10];

void init()
{
    int i;
    for(i = 0; i < 10; i++)
        chain[i] = NULL;
}

void insert(int value)
{
    //create a newnode with value
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    //calculate hash key
    int key = value % 10;

    //check if chain[key] is empty
    if(chain[key] == NULL)
        chain[key] = newNode;
    //collision
    else
    {
        //add the node at the end of chain[key].
        struct node *temp = chain[key];
        while(temp->next)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void print()
{
    int i;

    for(i = 0; i < 10; i++)
    {
        struct node *temp = chain[i];
        printf("[%d]=>",i);
        while(temp)
        {
            printf("%d -->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    
    init();
    int a[10];
    printf("Enter the keys\n");
    for(int i=0; i<10; i++)
      scanf("%d",&a[i]);
    printf("Sorting the array\n");
    for(int i = 0; i < 10; i++)    
    {    
      for(int j = i+1; j < 10; j++)    
        {    
            if(a[j] < a[i])    
            {    
                int temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
   
    for(int i = 0; i < 10; i++)    
       insert(a[i]);
    print();

    return 0;
}
