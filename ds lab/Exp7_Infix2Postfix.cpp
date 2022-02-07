#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

struct node
{
	char sign;
	struct node* next;
};


struct node* push(struct node *head, char sign)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp -> next = NULL;
	temp -> sign = sign;
	if(head == NULL)
		head = temp;
	else
	{
		temp -> next = head;
		head = temp;
	}

	return head;


}


struct node* pop(struct node *head)
{
	if(head == NULL)
		printf("Stack Empty\n");
	else
	{
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		temp = head;
		head = head -> next;
		free(temp);
	}

	return head;
}

int prec(char sign)
{
	if(sign == '^')
		return 3;
	else if(sign == '/' || sign == '*' || sign == '%')
		return 2;
	else if(sign == '+' || sign == '-')
		return 1;
	else
		return 0;
}

int main()
{
	char ifexp[100], pfexp[100];
	printf("Enter the infix expression : \n");
	scanf("%s", ifexp);
	struct node *st = NULL;
	int mov = 0;

	int l = strlen(ifexp);
	for(int i = 0; i < l; i++)
	{
		if(isalpha(ifexp[i]) || isdigit(ifexp[i]))
		{
			pfexp[mov] = ifexp[i];
			mov++;
		}
		else if(ifexp[i] == '(')
		{
			st = push(st, '(');	
		}
		else if(ifexp[i] == ')')
		{
			while(st->sign != '(')
			{
				pfexp[mov] = st->sign;
				mov++;
				st = pop(st);
			}
			st = pop(st);
		}
		else
		{
			while(st != NULL && prec(ifexp[i]) <= prec(st -> sign))
			{
				pfexp[mov] = st -> sign;
				mov++;
				st = pop(st);
			}
			st = push(st, ifexp[i]);
		}
	}

	while(st != NULL)
	{
		pfexp[mov] = st->sign;
		st = pop(st);
		mov++;
	}

	printf("The postfix expression is : %s", pfexp);
	
	return 0;
}