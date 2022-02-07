#include<stdio.h>

void sparce_display(int ar[10][10],int *r,int *c)
{ 
  printf("\n");
  for(int i=0;i<*r;i++){
   for(int j=0;j<*c;j++){
      printf("%d ",ar[i][j]);}
    printf("\n");}
}

void sparce_mat_input(int ar[10][10],int *r,int *c)
{
  printf("Enter the no of rows and column :");
  scanf("%d %d",r,c);
  printf("Enter the matrix :\n");
  for(int i=0;i<*r;i++)
   for(int j=0;j<*c;j++)
     scanf("%d",&ar[i][j]);
     
  sparce_display(ar,r,c);    
}

int compare(int a,int b,int p,int q)
  {
    if(a==b){
      if(p==q)
        return 0;
      else if(p<q)
        return 1;
      else if(p>q)
        return 2;
        }
    else if(a<b)
      return 1;
    else if(a>b)
      return 2;    
  }

void tuple_print(int tup[30][3])
{
  for(int i=0;i<=tup[0][2];i++){
   for(int j=0;j<3;j++){
      printf("%d ",tup[i][j]);}
    printf("\n");}
}

void tuple_display(int ar[10][10],int r,int c,int tup[30][3])
{
  int pos=1;
  tup[0][0]=r;
  tup[0][1]=c;
  for(int i=0;i<r;i++)
   for(int j=0;j<c;j++){
     if(ar[i][j]!=0)
       {
         tup[pos][0]=i;
         tup[pos][1]=j;
         tup[pos][2]=ar[i][j];
         pos++;
       }
  }
  tup[0][2]=pos-1;
  tuple_print( tup );     
}

void tuple_sum(int tup1[30][3],int tup2[30][3])
{
  int tupsum[30][3],p1=1,p2=1,p3=1;
  tupsum[0][0]=tup1[0][0];
  tupsum[0][1]=tup1[0][1];
  while(p1<=tup1[0][2] && p2<=tup2[0][2])
  { int sum;
    switch( compare(tup1[p1][0],tup2[p2][0],tup1[p1][1],tup2[p2][1]) )
       { 
         case 0: 
          sum=tup1[p1][2]+tup2[p2][2];
          if(sum!=0){
          tupsum[p3][0]=tup1[p1][0];
          tupsum[p3][1]=tup1[p1][1];
          tupsum[p3][2]=sum;
          p1++;
          p2++;
          p3++; }
          else if(sum==0){
          p1++;
          p2++;}
          break;
        case 1:
          tupsum[p3][0]=tup1[p1][0];
          tupsum[p3][1]=tup1[p1][1];
          tupsum[p3][2]=tup1[p1][2];
          p3++;
          p1++;
          break;
        case 2:
          tupsum[p3][0]=tup2[p2][0];
          tupsum[p3][1]=tup2[p2][1];
          tupsum[p3][2]=tup2[p2][2];
          p3++;
          p2++; 
          break; 
       }
  }
    while(p1<=tup1[0][2])
    {
      tupsum[p3][0]=tup1[p1][0];
      tupsum[p3][1]=tup1[p1][1];
      tupsum[p3][2]=tup1[p1][2];
      p3++;
      p1++;
    }
    
    while(p2<=tup2[0][2])
    {
      tupsum[p3][0]=tup2[p2][0];
      tupsum[p3][1]=tup2[p2][1];
      tupsum[p3][2]=tup2[p2][2];
      p3++;
      p2++;
    }
    
  tupsum[0][2]=p3-1;
  printf("Sum of tuples = \n");
  tuple_print( tupsum ); 
}

void tuple_transpose(int tup[][3],int tup_tran[][3])
{
  tup_tran[0][0]= tup[0][1];
  tup_tran[0][1]= tup[0][0];
  tup_tran[0][2]= tup[0][2];
  int p=1;
  for(int i=0;i<tup_tran[0][0];i++)
   for(int j=1;j<=tup[0][2];j++)
   {
     if(tup[j][1]==i)
     {
       tup_tran[p][0]= tup[j][1];
       tup_tran[p][1]= tup[j][0];
       tup_tran[p][2]= tup[j][2];
       p++;
     }
   }
  tuple_print( tup_tran );  
}

void tuple_normal(int tup_tran[][3])
{
  int arr[10][10]={0};
  for(int i=1;i<=tup_tran[0][2];i++)
    arr[tup_tran[i][0]][tup_tran[i][1]]=tup_tran[i][2];
  sparce_display( arr,&tup_tran[0][0],&tup_tran[0][1]);
}
                                                                     // Copyright senpai ; )

void main()
{
  int a[10][10], b[10][10], r1,c1,r2,c2,tup1[30][3],tup2[30][3],tup_tran1[30][3],tup_tran2[30][3];
  sparce_mat_input( a,&r1,&c1 );
  sparce_mat_input( b,&r2,&c2 );
  
  int flag=1;
  while(flag)
  {
    printf("  MENU  \n 0 :To exit \n 1 :To Display The Tuple Form Of The Matrices \n 2 :To Display The Sum Of The Tuples \n 3 :To Display The Transpose Of The Tuples \n 4 :To Display The Transpose In Normal Form \n");
    scanf("%d",&flag);
    
    switch(flag)
    {
      case 1:
             printf("Tuple form of Matrix A :\n");
             tuple_display( a,r1,c1,tup1 );
             printf("Tuple form of Matrix B :\n");
             tuple_display( b,r2,c2,tup2 );
             break;
      case 2:
             if(tup1[0][0]==tup2[0][0] && tup1[0][1]==tup2[0][1])
                tuple_sum( tup1,tup2 );
             else
                printf(" Sum not Possible !\n");
             break;
      case 3:
             printf("Transpose of Tuple A:\n");
             tuple_transpose( tup1,tup_tran1 );
             printf("Transpose of Tuple B:\n");
             tuple_transpose( tup2,tup_tran2 );
             break;
      case 4:
             printf("Transpose of Tuple A In Normal form:\n");      
             tuple_normal( tup_tran1 );
             printf("Transpose of Tuple B In Normal form:\n");      
             tuple_normal( tup_tran2 );
             break;
    }                              
  }
 printf("Exiting ....... \n");  
}
  
  
