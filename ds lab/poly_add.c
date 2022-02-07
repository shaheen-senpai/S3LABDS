#include<stdio.h>
  
  struct polynomial{
     int coef,term;
     }poly1[10],poly2[10],poly3[30];
     
  int poly_add(int m, int n)
  {
    int s=0,n1=0,n2=0;
    while(n1<m && n2<n)
    { int sum;
       switch(compare(poly1[n1].term,poly2[n2].term))
       { 
         case 0: 
          sum=poly1[n1].coef+poly2[n2].coef;
          if(sum!=0){
          poly3[s].coef=sum;
          poly3[s].term=poly1[n1].term;
          n1++;
          n2++;
          s++; }
          else if(sum==0){
          n1++;
          n2++;}
          break;
        case -1:
          poly3[s].coef=poly1[n1].coef;
          poly3[s].term=poly1[n1].term;
          s++;
          n1++;
          break;
        case 1:
          poly3[s].coef=poly2[n2].coef;
          poly3[s].term=poly2[n2].term;
          s++;
          n2++; 
          break; 
       }
    }
      while(n1<m)
       {  poly3[s].coef=poly1[n1].coef;
          poly3[s].term=poly1[n1].term;
          s++;
          n1++;
       }
      while(n2<n)
       {  poly3[s].coef=poly2[n2].coef;
          poly3[s].term=poly2[n2].term;
          s++;
          n2++;
       }
    
    return (s);
  }
  
  int compare(int a, int b)
  {
    if(a==b)
     return 0;
    else if(a>b)
     return -1;
    else if(a<b)
     return 1;
  }
  
  void read_poly1(int n)
  {
    for(int i=0;i<n;i++)
     {
         printf("\n enter the power of %d term ",i+1);
         scanf("%d",&poly1[i].term);
         
         printf("\n enter the coefficient of %d term ",i+1);
         scanf("%d",&poly1[i].coef);
     }
  } 
  void read_poly2(int n)
  {
    for(int i=0;i<n;i++)
     {
         printf("\n enter the power of %d term ",i+1);
         scanf("%d",&poly2[i].term);
         
         printf("\n enter the coefficient of %d term ",i+1);
         scanf("%d",&poly2[i].coef);
     }
  }  

  void sort_poly1(int n)
  {
    for(int i=0;i<n;i++)
     for(int j=0;j<n-1;j++)
     {
       if(poly1[j+1].term>poly1[j].term)
        { 
          int temp=poly1[j].coef;
          poly1[j].coef=poly1[j+1].coef;
          poly1[j+1].coef=temp;
          temp=poly1[j].term;
          poly1[j].term=poly1[j+1].term;
          poly1[j+1].term=temp;
        }
     }
  }
  void sort_poly2(int n)
  {
    for(int i=0;i<n;i++)
     for(int j=0;j<n-1;j++)
     {
       if(poly2[j+1].term>poly2[j].term)
        { 
          int temp=poly2[j].coef;
          poly2[j].coef=poly2[j+1].coef;
          poly2[j+1].coef=temp;
          temp=poly2[j].term;
          poly2[j].term=poly2[j+1].term;
          poly2[j+1].term=temp;
        }
     }
  }
  

 void main()
{
   int n1,n2;
   printf("\n enter the no: of terms in 1st polynomial ");
   scanf("%d",&n1);
   read_poly1(n1);
   sort_poly1(n1);
   
   printf("\n enter the no: of terms in 2nd polynomial ");
   scanf("%d",&n2);
   read_poly2(n2);
   sort_poly2(n2);
   
   for(int i=0;i<n1;i++)
   {
      printf("%dx^%d ",poly1[i].coef,poly1[i].term);
   }
   printf("\n");
   for(int i=0;i<n2;i++)
   {
      printf("%dx^%d ",poly2[i].coef,poly2[i].term);
   }
   printf("\n");
   printf("sum = ");
   int n3=poly_add(n1,n2);
   
   if(n3>30)
     printf("\n Too many elements in the polynomial \n");
     
   for(int i=0;i<n3;i++)
   {
      printf("%dx^%d ",poly3[i].coef,poly3[i].term);
   }
   
   //OUTPUT sum =14x^25 3x^6 12x^5 10x^4 17x^3 11x^0
}
