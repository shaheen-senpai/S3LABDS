#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
}*top, *front, *rear;

void sdisplay()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = top;
    printf("The stack elements are : \n");
    while(temp != NULL)
    {
        printf("%d\n", temp -> data);
        temp = temp -> next;
    }
}

void spush()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : \n");
    scanf("%d", &temp -> data);
    temp -> next = NULL;
    if(top == NULL)
        top = temp;
    else
    {
        temp -> next = top;
        top = temp;
    }

    sdisplay();
}
void spop()
{
    if(top == NULL)
        printf("Stack Empty\n");
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp = top;
        top = top -> next;
        printf("Deleted data : %d\n", temp -> data);
        free(temp);
        sdisplay();
    }

}


void stack()
{
    top = NULL;
    int ch = 0;
    do
    {
    printf("MENU\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Display\n");
    printf("4.Exit\n");
    scanf("%d", &ch);

    if(ch == 1)
        spush();
    else if(ch == 2)
        spop();
    else if(ch == 3)
        sdisplay();

    }while(ch != 4);

}


void qdisplay()
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp = front;
    printf("Queue Elements are : \n");
    while(temp != NULL)
    {
        printf("%d\n", temp -> data);
        temp = temp -> next;
    }

}


void qinsert()
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data : \n");
    scanf("%d", &temp->data);
    temp -> next = NULL;
    if(front == NULL || rear == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear -> next = temp;
        rear = temp;
    }

    qdisplay();
}
void qremove()
{

    if(front == NULL || rear == NULL)
        printf("Queue Empty \n");
    else
    {
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp = front;
        printf("Deleted data : %d\n", temp -> data);
        front = front -> next;
        free(temp);
        qdisplay();
    }

}


void queue()
{
    int ch = 0;
    do
    {
        printf("MENU\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        scanf("%d", &ch);

        if(ch == 1)
            qinsert();
        else if(ch == 2)
            qremove();
        else if(ch == 3)
            qdisplay();

    } while (ch != 4);

}



int main()
{
    int ch = 0;
    do
    {
    printf("MENU\n");
    printf("1.Stack\n");
    printf("2.Queue\n");
    printf("3.Exit\n");
    scanf("%d", &ch);

    if(ch == 1)
        stack();
    else if(ch == 2)
        queue();

    if(ch != 3)
    {
        int x;
        printf("Return to MAIN MENU /Exit (1/0) ?\n");
        scanf("%d", &x);
        if(x == 0)
            ch = 3;
    }
    }while(ch != 3);

    return 0;

}
