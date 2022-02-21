// copyright senpai ; )
#include<stdio.h>

void quick(int arr[],int left,int right);
void merge(int arr[],int n);
void heap(int arr[],int n);
int count=0;
void swap(int arr[],int a,int b);
void arrcopy(int to[],int from[],int n,int shift);
void prec(int arr[],int i,int n);

int main()
{
int n;
printf("Enter the number of elements:");
scanf("%d",&n);
int arr[n+1],arrcpy[n+1];
printf("Enter the elements:");
for(int i=0;i<n;i++)
    scanf("%d",&arrcpy[i]);

int choice;
do{
printf("\n1.Quick Sort\n2.Merge Sort\n3.Heap Sort\n0.To Exit\n");
scanf("%d",&choice);
switch(choice){
    case 1:
    arrcopy(arr,arrcpy,n,0);
    quick(arr,0,n-1);
    printf("\nQuick Sorted Array\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\nNo: of times loops run =  %d\n",count);   
    count=0;    
    break; 
     
    case 2:
    arrcopy(arr,arrcpy,n,0);
    merge(arr,n);
    printf("\nMerge Sorted Array\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);  
    printf("\nNo: of times loops run =  %d\n",count);   
    count=0;    
    break;  
    
    case 3:
    arrcopy(arr,arrcpy,n,1);
    heap(arr,n);
    printf("\nHeap Sorted Array\n");
    for(int i=1;i<n+1;i++)
        printf("%d ",arr[i]);
    printf("\nNo: of times loops run =  %d\n",count);   
    count=0;    
    break;    
   }   
 }while(choice);
return 0;
}

void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void arrcopy(int to[],int from[],int n,int shift){
    for(int i=0;i<n;i++)
        to[i+shift]=from[i];
}

void prec(int arr[],int i,int n){
    int child,temp;
    for(temp=arr[i];i*2<=n;i=child){    
        child=i*2;
count++;        
        if((child!=n)&&(arr[child+1]>arr[child]))
            child++;
        if(temp<arr[child])
            arr[i]=arr[child];
        else
            break;
    }
    arr[i]=temp;
}

void heap(int arr[],int n){
    int i;
    for(i=n/2;i>0;i--)
        prec(arr,i,n);
        
    for(i=n;i>=2;i--){
        swap(arr,1,i);
    prec(arr,1,i-1);
    }
}

void merge(int arr[],int n){
    int aux[n],k,i,j,size=1;
    int l1,l2,u1,u2;
    while(size<n){
        l1=0;
        k=0;
        while(l1+size<n){
            l2=l1+size;
            u1=l2-1;
            u2=(l2+size-1<n)?l2+size-1:n-1;
            for(i=l1,j=l2;i<=u1 && j<=u2;k++){
count++;               
                if(arr[i]<arr[j])
                    aux[k]=arr[i++];
                else
                    aux[k]=arr[j++];    
            }
            while(i<=u1)
                aux[k++]=arr[i++];
            while(j<=u2)
                aux[k++]=arr[j++];
            
            l1=u2+1;  
        }
        for(i=l1;i<n;i++)
            aux[k++]=arr[i];
        arrcopy(arr,aux,n,0);
        size*=2;
    }
}

void quick(int arr[],int left,int right){
    int pivot,i,j;
    if(left<right){
        i=left;
        j=right+1;
        pivot=arr[left];
        do{
            do{i++;}while(arr[i]<pivot);
            do{j--;}while(arr[j]>pivot);
        if(i<j)
           swap(arr,i,j);
count++;        
        }while(i<j);
        swap(arr,left,j);
        quick(arr,left,j-1);
        quick(arr,j+1,right);
    }
}

