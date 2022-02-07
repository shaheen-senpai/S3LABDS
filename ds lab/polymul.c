#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

#define NODE struct node

NODE{
    NODE *next;
    int exp;
    int coeff;
}node;

NODE* polyinput(NODE *eq);
void polydisplay(NODE *eq);
void addnode(NODE *ptr,int coeff,int exp);
NODE* polyprod(NODE *eq1,NODE *eq2);

int main()
{
    NODE *eqprod=NULL,*eq1=NULL,*eq2=NULL;

    eq1=polyinput(eq1);eq2=polyinput(eq2);

    polydisplay(eq1);polydisplay(eq2);

    eqprod=polyprod(eq1,eq2);

    polydisplay(eqprod);
    return 0;
}

NODE* polyinput(NODE *eq){
    NODE *temp=NULL,*ptr=NULL;
    int n,coeff,exp;
    printf("Enter the number of terms in the polynomial:");
    scanf("%d",&n);
    printf("Enter the polynomial as coeff exp:-\n");
    while(n--){
        temp=(NODE*)malloc(sizeof(NODE));
        scanf("%d %d",&coeff,&exp);
        temp->next=NULL;
        temp->coeff=coeff;
        temp->exp=exp;
        if(ptr==NULL){
            ptr=temp;
            eq=temp;
        }
        else{
            ptr->next=temp;
            ptr=temp;
        }
    }
    return eq;
}

void polydisplay(NODE *eq){
    NODE *ptr;
    ptr=eq;
    printf("POLYNOMIAL:");
    while(ptr!=NULL){
        if(ptr->coeff!=0)
            printf("%dx^%d ",ptr->coeff,ptr->exp);
        ptr=ptr->next;
    }
    putchar('\n');
}

void addnode(NODE *ptr,int coeff,int exp){
    NODE *temp=(NODE*)malloc(sizeof(NODE));
    temp->next=ptr->next;
    temp->coeff=coeff;
    temp->exp=exp;
    ptr->next=temp;
}

NODE* polyprod(NODE *eq1,NODE *eq2){
    int loop=0;
    NODE *head=(NODE*)malloc(sizeof(NODE));
    head->coeff=100;head->exp=100;head->next=NULL;
    for(NODE *a=eq1;a!=NULL;a=a->next){
        for(NODE *b=eq2;b!=NULL;b=b->next){
            int coeff=(a->coeff)*(b->coeff);
            int exp=(a->exp)+(b->exp);
            NODE *ptr=head;
           //printf("%dx^%d\n",coeff,exp);
            while(ptr!=NULL && (ptr->exp)>exp){
                //printf("%dx^%d\n",ptr->coeff,ptr->exp);
                if(ptr->next==NULL){
                    addnode(ptr,coeff,exp);
                    break;
                }
                else if((ptr->next->exp)==exp){
                      (ptr->next->coeff)+=coeff;
                      break;
                }
                else if((ptr->next->exp)<exp){
                     addnode(ptr,coeff,exp);
                     break;
                }
                else{
                    ptr=ptr->next;
                }
            }
        }
    }

    return head->next;
}